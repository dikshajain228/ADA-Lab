#include<bits/stdc++.h>

using namespace std;

int adj[15][15];
int indegree[15];
int n;
int flag=0;

void topo()
{	
		
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(indegree[j]==0)
			{
				flag=1;
				cout<<j<<" ";
				indegree[j]=-1;
				for(int k=1;k<=n;k++)
					if(adj[j][k]==1)
						indegree[k]=indegree[k]-1;
			}
			
			
			
		}
	}
	if(flag==0)
	{
		cout<<"no solution"<<endl;
	
	}	
}
int main()
{
	cout<<"enter the number of nodes"<<endl;
	cin>>n;
	int i,j;
	cout<<"enter the adjacency matrix"<<endl;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>adj[i][j];
			
	for(int i=1;i<=n;i++)
	{
		indegree[i]=0;
		for(int j=1;j<=n;j++)
		{
			indegree[i]=indegree[i]+adj[j][i];
			
		}
	}	

			
	topo();		
}