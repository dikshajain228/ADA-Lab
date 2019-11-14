#include<bits/stdc++.h>
using namespace std;
#define n 4

int w[n][n],d[n][n];

int min(int x,int y)
{
	if(x>y) return y;
	return x;
}

void floyds()
{
	int i,j,k;
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				d[i][j]=min(d[i][j],(d[i][k]+d[k][j]));
			}
		}
	}
	
	cout<<"Distance matrix :"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int i,j;
	
	cout<<"enter the weight matrix"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>w[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			d[i][j]=w[i][j];
		}
	}
	
	//memset(d,0,sizeof(d));
	floyds();
	
	return 0;
	
}