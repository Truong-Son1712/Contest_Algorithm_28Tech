#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int a[200000];
int F[200000]; 
int D[200000]; 
int main() 
{
	memset(a,0,sizeof(a));
	int N,K,Q; cin>>N>>K>>Q;
	while(N--){
		int L,R; cin>>L>>R;
		a[L]+=1;
		a[R+1]-=1; 
	} 
	F[0]=a[0];
	for(int i=1;i<200000;i++){
		F[i]=F[i-1]+a[i]; 
	} 
	if(F[0]>=K) D[0]=1;
	else D[0]=0;
	for(int i=1;i<200000;i++){
		if(F[i]>=K){
			D[i]=D[i-1]+1; 
		}else{
			D[i]=D[i-1]; 
		} 
	}
	while(Q--){
		int L,R; cin>>L>>R;
		cout<<D[R]-D[L-1]<<endl; 
	} 
	return 0; 
}
