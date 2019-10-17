#include<iostream>
using namespace std;
int n,count;
int adj[15][15],visited[15];
void dfs(int v)
{
	cout<<v<<" ";
	visited[v]=1;
	for(int i=0;i<n;i++)
	{
		if(adj[v][i]==1 && visited[i]==0)
			{
			    dfs(i);
			    count++;
			}
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

	for(int i=0;i<n;i++)
	{
	if(visited[i]==0)
		dfs(i);
	cout<<endl;
	}

	cout<<count;


}
