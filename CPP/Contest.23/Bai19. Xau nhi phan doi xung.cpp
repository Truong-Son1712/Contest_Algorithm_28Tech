#include<iostream>
#include<algorithm> 

using namespace std;

int n, ok=1;
string s;
void ktao() 
{
	s=string(n,'0'); 
}
bool check() 
{
	string tmp=s;
	reverse(tmp.begin(),tmp.end());
	return s==tmp; 
}
void sinh() 
{
	int i=s.size()-1;
	while(i>=0&&s[i]=='1'){
		s[i]='0';
		i--; 
	} 
	if(i==-1) ok=0;
	else s[i]='1'; 
}
int main() 
{
	cin>>n;
	ktao();
	while(ok){
		if(check()) cout<<s<<endl;
		sinh(); 
	} 
	return 0; 
}
