#include<iostream>
#include<string>
#include<math.h> 

using namespace std;

bool nt(int n) 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true; 
}
int main() 
{
	string s; cin>>s; 
	int sum=0;
	bool check=true; 
	for(int i=0;i<s.size();i++){
		if(nt(s[i]-'0')==false) check=false;
		sum+= s[i]-'0';
	} 
	if(nt(sum)==false) check=false;
	if(check) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
