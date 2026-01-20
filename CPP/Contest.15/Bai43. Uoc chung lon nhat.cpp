#include<iostream>
#include<string>

using namespace std;

long long chiadu(string s,long long m) 
{
	long long mod=0;
	for(int i=0;i<s.size();i++){
		mod=mod*10+(s[i]-'0');
		mod=mod%m;
	}
	return mod; 
}
long long gcd(long long a,long long b) 
{
	while(b!=0){
		long long du=a%b;
		a=b;b=du; 
	} 
	return a; 
}
int main() 
{
	string s; cin>>s;
	long long m; cin>>m;
	long long du=chiadu(s,m); 
	cout<<gcd(m,du);
	return 0; 
}
