#include <iostream>
#include <cstring>
using namespace std;
 
#define INF 9999999
#define V 4
 
 
int G[V][V] ;
 
int main () {
 
  cout<<"enter the matrix for the graph "<<endl;
  for (int i = 0; i < V; i++) {
	  for(int j=0;j<V;j++){
		  cin>>G[i][j];
	  }
  }
	
  int no_edge;            // number of edge
 
  int selected[V];
 
  memset (selected, false, sizeof (selected));
 
  no_edge = 0;
 
  selected[0] = true;
 
  int x;            //  row number
  int y;            //  col number
 
  cout << "Edge" << " : " << "Weight";
  cout << endl;
  while (no_edge < V - 1) {
 
  //For every vertex in the set S, find the all adjacent vertices
  // , calculate the distance from the vertex selected at step 1.
  // if the vertex is already in the set S, discard it otherwise
  //choose another vertex nearest to selected vertex  at step 1.
 
      int min = INF;
      x = 0;
      y = 0;
 
      for (int i = 0; i < V; i++) {
        if (selected[i]) {
            for (int j = 0; j < V; j++) {
              if (!selected[j] && G[i][j]) { // not in selected and there is an edge
                  if (min > G[i][j]) {
                      min = G[i][j];
                      x = i;
                      y = j;
                }
     
              }
          }
        }
      }
      cout << x <<  " - " << y << " :  " << G[x][y];
      cout << endl;
      selected[y] = true;
      no_edge++;
    }
 
  return 0;
}

	
	
	
