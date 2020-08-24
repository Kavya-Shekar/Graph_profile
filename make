aout:	example.o graph_profile.o
	gcc example.o graph_profile.o
example.o:	example.c graph_profile.h
	gcc -c example.c
graph_profile.o:	graph_profile.c graph_profile.h
	gcc -c graph_profile.c

