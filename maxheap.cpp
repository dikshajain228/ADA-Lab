#include<bits/stdc++.h>
using namespace std;

int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

bool isMaxHeap(int a[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		if(a[i]<min(a[2*i+1],a[2*i]))
			return false;
	}
	return true;
}


int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the heap array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	bool res=isMaxHeap(a,n);
	if(res==true)
		cout<<"It is a max Heap\n";
	else
		cout<<"It is not a max Heap\n";
}
