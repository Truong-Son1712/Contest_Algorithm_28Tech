#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 

using namespace std;

bool cmp(string a,string b) 
{
	if(a.size()!=b.size()) return a.size()>b.size();
	else return a>b; 
}
int main() 
{
	string s; cin>>s;
	string len;
	len+=s[0]; 
	vector<string> v; 
	for(int i=0;i<s.size()-1;i++) {
		if(s[i]!=s[i+1]){
			len+=s[i+1];
			v.push_back(len);	
		} else{
			len=s[i+1]; 
		} 
	}
	sort(v.begin(),v.end(),cmp);
	if(v.size()!=0) cout<<v[0];
	else cout<<s[0]; 
	//for(int i=0;i<v[0].size();i++) cout<<v[0][i]; 
	return 0; 
}
