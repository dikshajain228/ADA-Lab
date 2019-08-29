#include<iostream>
using namespace std;
int main()
{
	int i,j,n,min;
	int count=0;
	cout<<"Enter the size:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++)
			{
				count++;
				if(a[j]<a[min])
				min=j;
			}	
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
	}
	cout<<"number of comparisons is "<<count;
return 0;
}	