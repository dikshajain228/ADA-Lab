#include<iostream>
#include<stdlib.h>
using namespace std;
int maximum(long int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
 int main(){
	int n;
	 cout<<"enter the number of elements ";
	 cin>>n;
	 long int a[n];
	 for(int i=0;i<n;i++){
		 a[i]=rand()%1000;
	 }
	int result=maximum(a,n);
	cout<<"maximum element ="<<result;
	return 0;
 }