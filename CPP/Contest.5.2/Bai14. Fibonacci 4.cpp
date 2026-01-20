#include<iostream>
#include<vector> 
#include<algorithm> 
#include<math.h>
#include<cstring>
 
using namespace std;

long long F[100];
vector<long long>v; 
void ktao() 
{
	F[0]=0; F[1]=1;
	v.push_back(F[1]); v.push_back(F[0]); 
	for(int i=2;i<=92;i++){
		F[i]=F[i-1]+F[i-2];
		v.push_back(F[i]); 
	} 
}
bool nt[10001];
void sang() 
{
	memset(nt,true,sizeof(nt));
	nt[1]=nt[0]=false;
	for(int i=2;i<=sqrt(10001);i++){
		if(nt[i]==true){
			for(int j=i*i;j<=10001;j+=i) nt[j]=false; 
		}
	} 
}
bool check(int n) 
{
	if(!nt[n]) return false; 
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10; 
	}
	if(binary_search(v.begin(),v.end(),sum)) return true;
	else return false; 
}
int main() 
{
	ktao();
	sang(); 
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		if(check(i)) cout<<i<<" "; 
	}
	return 0; 
}
