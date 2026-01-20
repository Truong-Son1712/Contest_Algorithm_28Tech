#include<iostream>
#include<string>
#include<math.h> 
#include<map> 

using namespace std;

bool nt(char m) 
{
	int n=m-'0'; 
	if(n==2||n==5||n==3||n==7) return true;
	else return false; 
}
int main() 
{
	int d[10]={0};
	map<char,int> mp; 
	string s; cin>>s;
	for(int i=0;i<s.size();i++) 
	{
		if(nt[s[i]]) mp[s[i]]++; 
	}
	for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
	cout<<endl; 
	for(int i=0;i<s.size();i++){
		if(d[s[i]-'0']==0){
			cout<<s[i]<<" "<<mp[s[i]]<<endl;
			d[s[i]-'0']=1; 
		}
	} 
	return 0; 
}
