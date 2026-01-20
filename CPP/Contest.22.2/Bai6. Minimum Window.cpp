#include<iostream>
#include<string>
#include<map> 
#include<set> 
using namespace std;

string a,t; 
map<char,int> mp;
map<char,int> mp2; 
bool check()
{
	for(int i=0;i<t.size();i++){
		if(mp2.count(t[i])){
			if(mp2[t[i]]<mp[t[i]]) return false; 
		}
		else return false; 
	} 
	return true;  
}
int main() 
{
	cin>>a>>t;
	bool ok=false;
	for(char x:t) mp[x]++;  
	int len=1e9, idx=0;
	int r=0; 
	mp2[a[r]]++; 
	for(int l=0;l<a.size();l++){ 
			while(r<a.size()&&check()==false){
				++r; 
				mp2[a[r]]++; 
			} 
			if(check()==true){
				if(r-l+1<len){
					len=r-l+1;
					idx=l;
				} 
			} 
		if(mp2[a[l]]>1) mp2[a[l]]--;
		else mp2.erase(a[l]); 
	}
	for(int i=idx;i<idx+len;i++) cout<<a[i];
	return 0; 
}
