#include<iostream>
#include<vector> 
#include<algorithm> 

using namespace std;

long long F[100];
vector<long long>v; 
void ktao() 
{
	F[2]=1; F[1]=1;
	v.push_back(F[1]); v.push_back(F[0]); 
	for(int i=3;i<=92;i++){
		F[i]=F[i-1]+F[i-2];
		v.push_back(F[i]); 
	} 
}

int main() 
{
	ktao();
	long long n; cin>>n;
	auto it=lower_bound(v.begin(),v.end(),n);
	cout<<(long long)*it; 
	return 0; 
}
