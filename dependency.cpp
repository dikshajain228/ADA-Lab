#include<bits/stdc++.h>

using namespace std;

int adj[15][15];
int indegree[15];
int n;
int flag=0;

void topo()
{
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			if(indegree[j]==0)
			{
				flag=1;
				cout<<j<<" ";
				indegree[j]=-1;
				for(int k=0;k<=n-1;k++)
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
	int i,j,p,a,b;
	cout<<"enter the no of pairs"<<endl;
	cin>>p;
	for(i=1;i<=p;i++)
    {
        cin>>a;
        cin>>b;
        adj[b][a]=1;
    }

	for(int i=0;i<=n-1;i++)
	{
		indegree[i]=0;
		for(int j=0;j<=n-1;j++)
		{
			indegree[i]=indegree[i]+adj[j][i];

		}
	}
	topo();
}
