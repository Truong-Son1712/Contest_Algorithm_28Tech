#include<iostream>
#include<string>

using namespace std;

int n, x[100], used[100];

bool check(string s) 
{
	s='1'+s;
	s=s+'1'; 
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'||s[i]=='E') s[i]='1'; 
	} 
	for(int i=1;i<=n;i++){
		if(s[i]=='1'&&s[i-1]!='1'&&s[i+1]!='1'){
			return false; 
		} 
	} 
	return true; 
}
void in() 
{
	string s="";
	for(int i=1;i<=n;i++){
		s+=(char)(x[i]+'A'-1); 
	} 
	if(check(s)){
		cout<<s<<endl; 
	} 
}
void Try(int i) 
{
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			x[i]=j;
			used[j]=1;
			if(i==n){
				in();
			} else{
				Try(i+1); 
			} 
			used[j]=0; 
		} 
		
	} 
}
int main() 
{
	char c; cin>>c;
	n=c-'A'+1;
	Try(1);
	return 0; 
}
