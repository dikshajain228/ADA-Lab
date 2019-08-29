#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a[10],n,i,j;
	int count=0;
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	cout<<"Enter the elements";
	for(int i =0;i<n;i++)
	cin>>a[i];
	
	for(i =0 ; i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			{
				count++;
				if(a[j]>a[j+1])
				{
					int temp = a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
	}
	
	
	cout<<"number of comparisons in bubble sort is "<<count<<endl;
	
	return 0;
}
