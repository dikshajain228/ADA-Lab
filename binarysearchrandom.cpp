#include<iostream>
using namespace std;
int search(int a[],int n,int k){
	int mid,high,low;
	high=n-1;
	low=0;
	while(low<=high){
		mid=(high+low)/2;
		if(k==a[mid])
			return mid;
		else{
			if(k<a[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		
	}
    return -1; 	
}

int main()
{
 int n,k;
	 cout<<"enter the number of elements ";
	 cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++){
		 a[i]=rand();
	 }
	  
	 cout<<"enter the search element";
	  cin>>k;
	  for (int i=0;i < n; i++)     
	  {
        for (int j = 0; j < n-i-1; j++)
		{
        if (a[j] > a[j+1])  
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}  
		}
		}
	  int result=search(a,n,k);
	  if(result==-1)
		  cout<<"element not found";
	 else
		cout<<"element found at"<<result;
		
	return 0;	
}