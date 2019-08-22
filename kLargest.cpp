#include<iostream>
using namespace std;

int main()
{
	int i,j,max,n,a[10];
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	int k;
	cout<<"Enter the value for k:";
	cin>>k;
	int count=k;
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
		//cout<<a[i];
		
	}
	for(int i=n-1;i>0;i--)
		{
			if(count>0)
				{
					cout<<a[i]<<endl;
				}
			count--;	
		}		
	return 0;	
}