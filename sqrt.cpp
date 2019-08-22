#include <iostream>
using namespace std;
int main(){
	int num,start,end,sq,mid;
	cout<<"enter num:";
	cin>>num;
	start=0;
	end=num-1;
	
	while (start<= end)
		{
			mid=(start+end)/2;
			if(mid*mid==num){
				sq=mid;
				break;
			}
			else if(mid*mid>num){
				end=mid-1;
			}
			else{
				start=mid+1;
				sq=mid;
			}

	}
cout<<"sqrt is:"<<sq;
return 0;
}