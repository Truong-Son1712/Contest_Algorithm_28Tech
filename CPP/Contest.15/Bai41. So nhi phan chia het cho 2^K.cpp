#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s;cin>>s;
	int k; cin>>k;
	string t=s.substr(s.size()-k,k);
	string v(k,'0');
	//cout<<t<<" "<<v; 
	if(t==v) cout<<"YES";
	else cout<<"NO"; 
	return 0; 
}
