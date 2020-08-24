# Intal_library
Profile properties an undirected unweighted graph

HOW TO RUN TEST FILES:
```
$ make -f make
$ ./a.out < example_input.txt
```

IMPLEMENTATION

1. What is average degree of a vertex in the graph?
	The function has been implemented using 2 'for' loops. An outer loop to traverse through every single node, inner loop to check the adjacent nodes. A counter variable - count has been used to store the sum of degree of every node. (count/n) - the average degree of the graph, is returned by the function.

2. Is the graph a regular graph?
	Degree of each node in a regular graph will be equal to the average degree of a graph. The function has been implemented using 2 'for' loops. An outer loop to traverse though every single node, inner loop to calculate the degree of the particular node. The function breaks and returns 0 if the degree of any node is not equal to the average degree of the graph, else returns 1.

3. Is the graph a complete graph?
	The function has been implemented using 2 'for' loops for traversal. The function breaks and returns 0 when any 2 distinct nodes aren't connected, else it returns 1 after completing the whole traversal.
	
4. Is the graph a cycle graph?
	A graph is said to be a cycle graph when it is a regular graph and average degree of the graph is equal to 2. An 'if' condition checks for the return value of the previous functions : isRegular() and avgDegree() and returns 0 and 1 respectively.

5. Is the graph a path graph but not a cycle graph?
	A graph is said to be a path graph when it has exactly 2 nodes with degree 1, remaining nodes with degree 2. The 2 loops used for traversal checks for the degree of every node. Nodes with degree 1 are counted using a counter variable - 'count'. If any node with degree other than 1 or 2 is encountered, the function breaks and returns 0. If count is not equal to 2 - it returns 0, else it returns 1.

6. Does the graph has an Euler circuit?
	Degree of every node is calculated and checked if it is an even number. The function breaks and returns 0 when an odd degree is calculated, else it returns 1.

7. Does the graph has an Euler path but not an Euler circuit?
	Degree of every node is calucated and the number of nodes with odd degree is calculated. If there are exactly 2 nodes with odd degree, function returns 1; else it returns 0.

8. Does the graph satisfy the sufficient condition of the Ore's theorem?
	The function has been implemented using 2 for loops. Everytime non-adjacent nodes are encountered, the sum of the degree of the 2 nodes is calculated. If the sum is less than the number of nodes, the function breaks and returns 0, else it returns 1.
