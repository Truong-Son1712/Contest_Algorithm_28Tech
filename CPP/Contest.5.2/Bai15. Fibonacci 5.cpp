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

int main() 
{
	ktao(); 
	int T; cin>>T;
	while(T--) 
	{
		int x; cin>>x;
		if(binary_search(v.begin(),v.end(),x)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	}
	return 0; 
}
