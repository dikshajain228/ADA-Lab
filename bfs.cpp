#include<iostream>
#include<algorithm>
#include <queue>
using namespace std;

int n;
int visited[15],adj[15][15];
queue<int> q;

void bfs(int k)
{
	visited[k]=1;
	q.push(k);
	while(!q.empty())
	{
		int s = q.front(); 
        cout << s << " "; 
        for (int i = 0; i < n; ++i) 
        { 
			if(adj[s][i]==1)
			{
				if (visited[i]==0) 
				{ 
					visited[i] = 1; 
					q.push(i);
					//cout<<i<<" ";
				}
			}
		}
		q.pop(); 
	}
}	

int main()
{
	
	cout<<"enter the no. of nodes "<<endl;
	cin>>n;
	
	cout<<"enter the adjacency matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>adj[i][j];
			
	}
	for(int i=0;i<n;i++)
	{
		visited[i]=0;
	}
	cout<<"enter the source vertex"<<endl;
	int k;
	cin>>k;
	bfs(k);
	return 0;
}