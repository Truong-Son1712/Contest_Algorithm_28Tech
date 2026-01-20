#include<iostream>
#include<set>
#include<string>
#include<algorithm> 

using namespace std;

int n,N,ok=1;
string s;

bool check() 
{
	string tmp=s;
	reverse(tmp.begin(),tmp.end());
	return s==tmp; 
} 
void ktao() 
{
	ok=1; 
	s=string(n,'0'); 
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
	set<string> se; 
	cin>>N;
	for(int i=2;i<=N;i+=2){
		n=i;
		ktao();
		while(ok){
			if(check()) se.insert(s);
			sinh(); 
		} 
	} 
	for(auto x:se){
		cout<<x<<endl; 
	} 
	return 0; 
}

