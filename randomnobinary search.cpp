#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i,j,max,n;
	cout<<"Enter the size:";
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++)
		a[i]=rand();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			
			}
		}
	}	
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";