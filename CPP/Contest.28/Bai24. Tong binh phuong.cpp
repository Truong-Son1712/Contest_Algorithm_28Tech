#include<iostream>
#include<cstring>
#include<math.h> 
#include<algorithm> 
using namespace std;

int F[10001]; 
int main() 
{
	int n; cin>>n;
	F[0]=0;
	F[1]=1;
	for(int i=2;i<=n;i++){
		F[i]=10001; 
		for(int j=sqrt(i);j>=1;j--){
			F[i]=min(F[i],1+F[i-j*j]); 
		} 
	} 
	cout<<F[n];
	return 0; 
}
