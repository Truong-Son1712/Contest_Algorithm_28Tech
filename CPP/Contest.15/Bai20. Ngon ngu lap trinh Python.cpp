#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; cin>>s;
	bool p=false,y=false,t=false,h=false,o=false,n=false;
	for(int i=0;i<s.size();i++){
		if(s[i]=='p') p=true;
		else if(p==true&&s[i]=='y') y=true; 
		else if(y==true&&s[i]=='t') t=true; 
		else if(t==true&&s[i]=='h') h=true; 
		else if(h==true&&s[i]=='o') o=true; 
		else if(o==true&&s[i]=='n') n=true; 
	} 
	if(n==true) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
