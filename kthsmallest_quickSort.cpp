#include<iostream>

using namespace std;

void swap(int* a,int* b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int l,int h,int a[])
{
	int temp;
	int pivot=a[l];
	int i=l;
	int j=h+1;
	while(i<=j)
	{
		do{
			i++;
		}while(a[i]<=pivot);
		do{
			j--;
		}while(a[j]>pivot);

		swap(a[i],a[j]);
	}
		swap(a[i],a[j]);
		swap(a[l],a[j]);
	return j;
}
void quickSort(int l,int h,int a[])
{
	if(l<h)
	{
		int j=partition(l,h,a);
		quickSort(l,j,a);
		quickSort(j+1,h,a);

	}
}

int main()
{
	int a[10],n,k,i,j,start,end;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements";
	for(int i =0;i<n;i++)
		cin>>a[i];
	cout<<"enter start"<<endl;
	cin>>start;
	cout<<"enter end"<<endl;
	cin>>end;
	cout<<"enter k"<<endl;
	cin>>k;

	quickSort(start-1,end-1,a);
	cout<<"kth smallest in the array :"<<endl;
    cout<<a[k+start-2]<<" ";

    for(int i =0;i<n;i++)
		cout<<a[i];

	return 0;
}
