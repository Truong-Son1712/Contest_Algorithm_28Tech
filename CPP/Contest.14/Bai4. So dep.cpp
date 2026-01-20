#include<iostream>
#include<string>
#include<math.h> 

using namespace std;

int main() 
{
	string s; cin>>s;
	bool check= true; 
	for(int i=0;i<s.size()-1;i++)
		if(abs(s[i]-s[i+1])!=1) check=false;
	if(check) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
