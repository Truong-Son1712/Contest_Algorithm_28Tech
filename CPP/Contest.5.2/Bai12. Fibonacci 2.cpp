#include<iostream>
#include<vector> 

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
	long long n; cin>>n;
	for(int i=0;i<v.size();i++ ){
		if(n==v[i]){
			cout<<"YES";
			return 0; 
		} 
	} 
	cout<<"NO"; 
	return 0; 
}
