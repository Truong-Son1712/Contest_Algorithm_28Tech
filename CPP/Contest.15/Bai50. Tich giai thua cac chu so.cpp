#include<iostream> 
#include<string>
#include<algorithm> 

using namespace std;

int main() 
{
	string s; cin>>s;
	string t;
	for(int i=0;i<s.size();i++){
		if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7') t+=s[i];
		else if(s[i]=='4') t+="322";
		else if(s[i]=='6') t+="53";
		else if(s[i]=='8') t+="7222";
		else if(s[i]=='9') t+="7332";
	} 
	sort(t.begin(),t.end(),greater<char>());
	for(int i=0;i<t.size();i++) cout<<t[i];
	return 0; 
}
