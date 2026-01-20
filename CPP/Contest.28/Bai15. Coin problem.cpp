#include<iostream>
#include<algorithm> 

using namespace std;

int F[1000001]; 
int main() 
{
	int n; int s;
	cin>>n>>s;
	int a[n];
	for(int &x:a) cin>>x;
	F[0]=0; 
	for(int i=1;i<=s;i++){ 
		F[i]=1e9; 
		for(int j=0;j<n;j++){
			if(i>=a[j]){
				F[i]=min(F[i-a[j]]+1,F[i]) ;
			} 
		}  
	}
	if(F[s]==1e9) cout<<-1;
	else cout<<F[s]; 
	return 0; 
}
