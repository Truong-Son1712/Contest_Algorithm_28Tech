#include<iostream> 

using namespace std;

int F[2500005];
int main() 
{
	int n; cin>>n;
	int s=n*(n+1)/2; 
	int mod=1e9+7;
	long long res=0; 
	if(s%2==0){
		s/=2;
		F[0]=1; 
		for(int i=1;i<=n;i++){
			for(int j=s;j>=1;j--){
				if(j>=i){
					F[j]+=F[j-i]; 
					if(i==n&&j==s){
						res=F[j-i]; 
					} 
				}
				F[j]%=mod; 
			}  
		} 
	} 
	cout<<res;
	return 0; 
}
