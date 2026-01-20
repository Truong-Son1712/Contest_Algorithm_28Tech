#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<map> 
 
using namespace std;

int n;
char a[100]; 
set<string> kq; 
map<int,char> mp;
void ktao() 
{ 
	mp.insert({1,'('});
	mp.insert({2,')'});
	mp.insert({3,'{'});
	mp.insert({4,'}'});
	mp.insert({5,'['});
	mp.insert({6,']'}); 
}
bool check(string s) 
{
	vector<char> stack;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('||s[i]=='{'||s[i]=='['){
			stack.push_back(s[i]); 
		}else{
			if(stack.size()==0) return false;
			char last=stack.back();
			if((s[i]==')'&&last=='(')||(s[i]==']'&&last=='[')||(s[i]=='}'&&last=='{')) stack.pop_back();
			else return false; 
		} 
	} 
	return stack.size()==0; 
}
void Try(int i) 
{
	for(int j=1;j<=6;j++){
		a[i]=mp[j]; 
		if(i==n){
			string s=""; 
			for(int u=1;u<=n;u++) s+=a[u]; 
			if(check(s)) kq.insert(s);	
		}else{
			Try(i+1); 
		} 
	} 
}
int main() 
{
	cin>>n;
	ktao();
	Try(1);
	for(auto x: kq) cout<<x<<" ";
	return 0; 
}
