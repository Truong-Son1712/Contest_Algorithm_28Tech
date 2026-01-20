#include<iostream> 
#include<algorithm>
 
using namespace std;

int mod =1e9+7;
long long F[1000001]; 
int main() 
{
	int n,x; cin>>n>>x;
	int a[n];
	F[0]=1; 
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<=x;i++){
		long long sum=0; 
		for(int j=0;j<n;j++){
			 if(i>=a[j]){
			 	sum+=F[i-a[j]]; 
			 	sum%=mod; 
			 } 
		}  
		F[i]=sum; 
	} 
	cout<<F[x]; 
	return 0; 
}
