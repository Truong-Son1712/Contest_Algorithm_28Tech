#include<iostream>
#include<string>

using namespace std;

int chuyen(string s) 
{
	int n=0; 
	for(int i=0;i<s.size();i++){
		n=n*10+s[i]-'0'; 
	} 
	return n; 
}
int main() 
{
	string s;cin>>s;
	if(s.size()==1){
		if((s[0]-'0')%4==0) cout<<"YES";
		else cout<<"NO"; 
	}else{
		char n1=s[s.size()-2];
		char n2=s[s.size()-1]; 
		string num; num=n1; 
		num+=n2; 
		int n=chuyen(num);
		if(n%4==0) cout<<"YES";
		else cout<<"NO"; 
	} 
}
