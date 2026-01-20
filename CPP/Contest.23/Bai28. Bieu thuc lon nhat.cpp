#include<iostream>
#include<string>
#include<math.h> 

using namespace std;

int a[5], x[4], res; 

void xuly() 
{
	int sum=a[1]; 
	for(int i=1;i<=3;i++){
		if(x[i]==0){
			 sum=sum-a[i+1]; 
		} else {
			sum=sum+a[i+1]; 
		}
	} 
	res=max(res,sum); 
}
void Try(int i) 
{
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==3){
			xuly(); 
		} else{
			Try(i+1); 
		} 
	} 
}
int main() 
{
	for(int i=1;i<=4;i++) cin>>a[i];
	Try(1);
	cout<<res;
	return 0; 
}
