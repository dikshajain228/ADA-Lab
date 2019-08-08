#include<iostream>
using namespace std;
int maximum(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
 int main(){
	 int n,a[100];
	 cout<<"enter the number of elements ";
	 cin>>n;
	 cout<<"enter the elements in the array";
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	int result=maximum(a,n);
	cout<<"maximum element ="<<result;
	return 0;
 }