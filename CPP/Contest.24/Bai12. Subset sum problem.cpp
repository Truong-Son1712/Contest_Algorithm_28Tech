#include<iostream>
#include<numeric> 

using namespace std;

int n, a[100],x[100], ok=0, k=0;
void ql(int i,int sum) 
{
	for(int j=x[i-1]+1;j<=n;j++) {
		if(sum+a[j]<=k){
			x[i]=j;
			if(sum+a[j]==k){
				ok=1;
				break; 
			} 
			else{
				ql(i+1,sum+a[j]) ;
			}  
		} 
	}
}
int main() 
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	x[0]=0;
	int sum=accumulate(a+1,a+n+1,0);
	k=sum/2; 
	if(sum%2!=0){
		cout<<0;
		return 0; 
	} 
	ql(1,0);
	if(ok) cout<<1;
	else cout<<0; 
}
