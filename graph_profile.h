//Profile a connected undirected unweighted graph for the following properties.

// Constraints:
// 1. Graph is connected 
// 2. Graph is undirected
// 3. Graph is unweighted
// 4. Graph has at least 3 vertices and upmost 100 vertices
// 5. No self loops and no parallel edges
// 6. A testcase must complete within 1 second of time
// 7. Graph input is a 0/1 matrix

// 1. Returns average degree of a vertex in the graph.
int avgDegree(int **g, int n);

// 2. Returns 1 if graph is regular, else returns 0.
int isRegular(int **g, int n);

// 3. Returns 1 if graph is complete, else returns 0.
int isComplete(int **g, int n);

// 4. Returns 1 if graph is cyclic, else returns 0.
int isCycleGraph(int **g, int n);

// 5. Returns 1 if graph is a graph but not a cycle graph, else returns 0.
int isPathGraph(int **g, int n);

// 6. Returns 1 if graph has a Euler circuit, else returns 0.
int hasEulerCkt(int **g, int n);

// 7. Returns 1 if graph has an Euler path but not an Euler circuit, else returns 0.
int hasEulerPath(int **g, int n);

// 8. Returns 1 if graph obeys the conditions of Ore's theorem, else returns 0.
// Sufficient condition for the graph to have a Hamilton according the Ore's theorem:
// deg(u) + deg(v) ≥ n for every pair of nonadjacent vertices u and v in the graph
int satifiesOresTheorem(int **g, int n);
