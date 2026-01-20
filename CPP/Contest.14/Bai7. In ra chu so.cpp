#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; cin>>s;
	string s1,s2;
	for(int i=0;i<s.size();i++){
		if(s[i]>='0'&&s[i]<='9') s1+=s[i];
		else s2+=s[i]; 
	} 
	cout<<s1<<endl<<s2;
	return 0; 
}
