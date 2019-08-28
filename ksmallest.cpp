#include<iostream>
using namespace std;
int main()
{
	int i,j,n,min;
	cout<<"Enter the size:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	int k;
	cout<<"Enter the value for k:";
	cin>>k;
	for(i=0;i<k;i++){
		min=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[min])
				min=j;
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
	}
	cout<<"kth smallest element is "<<a[k+1];
return 0;
}	
		
