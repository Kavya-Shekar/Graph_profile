//Profile a connected undirected unweighted graph for the following properties.
#include <stdlib.h>
#include "graph_profile.h"

static int degree(int **g,int n,int v)
{
    int count = 0;
    for(int i=0;i<n;i++)   
        if(g[v][i]) count++;
    return count;
}

// 1. What is average degree of a vertex in the graph?
int avgDegree(int **g, int n) {
    int deg = 0;
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(g[i][j]) deg++;
        }
    }
    int avg_deg = deg/n;
    return avg_deg;
}

// 2. Is the graph a regular graph?
int isRegular(int **g, int n) {
    int avgdeg = avgDegree(g,n);
    for(int i = 0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(g[i][j]) count++;
        }
        if(count!=avgdeg)return 0;
    }
    return 1;
}
 
// 3. Is the graph a complete graph?
int isComplete(int **g, int n) {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i==j) & (g[i][j]==1)) return 0;
            else if((i!=j) & (g[i][j]==0)) return 0;
        }
    }
    return 1;
}

// 4. Is the graph a cycle graph?
int isCycleGraph(int **g, int n) 
{
    if(isRegular(g,n) & (avgDegree(g,n)==2)) return 1;
    return 0;
}

// 5. Is the graph a path graph but not a cycle graph?
int isPathGraph(int **g, int n) 
{
    if(isCycleGraph(g,n)) return 0;
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        int deg = degree(g,n,i);
        if((deg%2)==1) count++;
        else if(deg!=2) return 0;
    }
    if(count == 2) return 1;
    return 0;
}

// 6. Does the graph has an Euler circuit?
int hasEulerCkt(int **g, int n) 
{
    for(int i=0;i<n;i++)
    {
        int deg = degree(g,n,i);
        if((deg%2)!=0) return 0;
    }
    return 1;
}

// 7. Does the graph has an Euler path but not an Euler circuit?
int hasEulerPath(int **g, int n) 
{
    if(hasEulerCkt(g,n)) return 0;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        int deg = degree(g,n,i);
        if((deg%2)!=0) ++count;
    }
    if(count==2) return 1;
    return 0;
}

// 8. Does the graph satisfy the sufficient condition of the Ore's theorem?
// Sufficient condition for the graph to have a Hamilton according the Ore's theorem:
// deg(u) + deg(v) ≥ n for every pair of nonadjacent vertices u and v in the graph
int satifiesOresTheorem(int **g, int n) 
{
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if((i!=j) & (g[i][j]==0))
            {
		int x = degree(g,n,i);
		int y = degree(g,n,j);
                if((x+y)<n) return 0;
            }
        }
    }
    return 1;
}
