#include<iostream>
#include<string>

using namespace std;

void latnguoc(string &s)
{
	string t;
	for(int i=0;i<s.size();i++) t+=s[s.size()-1-i];
	s=t; 
}
int main() 
{
	string s; cin>>s;
	latnguoc(s);
	int sumdu=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'){
			if(i%4==0) sumdu+=1;
			else if(i%4==1) sumdu+=2;
			else if(i%4==2) sumdu+=4;
			else sumdu+=3; 
		} 
	} 
	if(sumdu%5==0) cout<<"YES";
	else cout<<"NO";
	return 0; 
}

 
