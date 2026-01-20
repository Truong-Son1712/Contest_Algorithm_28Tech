#include<iostream>
#include<string>

using namespace std;

long long chiadu(string s,long long m) 
{
	long long mod=0;
	for(int i=0;i<s.size();i++)
		mod=(mod*10+(s[i]-'0'))%m;
	return mod; 
}
int main() 
{
	string n; cin>>n;
	long long du=chiadu(n,4);
	int cuoi; 
	if(du%4==1) cuoi=8;
	else if(du%4==2) cuoi=4;
	else if(du%4==3) cuoi=2;
	else if(du%4==0) cuoi=6;
	if(n=="0") cout<<1;
	else cout<<cuoi; 
	return 0; 
}
