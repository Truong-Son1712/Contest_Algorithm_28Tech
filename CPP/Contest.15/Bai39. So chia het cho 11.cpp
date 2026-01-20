#include<iostream>
#include<string>
#include<math.h> 

using namespace std;

int main() 
{
	string s; cin>>s;
	int sumc=0,suml=0;
	for(int i=0;i<s.size();i++){
		if(i%2==0) suml+=s[i]-'0';
		else sumc+=s[i]-'0'; 
	} 
	int hieu=abs(sumc-suml);
	if(hieu%11==0)cout<<"YES";
	else cout<<"NO";
	return 0; 
}
