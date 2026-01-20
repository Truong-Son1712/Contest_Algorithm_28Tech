#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; cin>>s;
	int res=1, lenhh=1;
	char kt='a'; 
	for(int i=0;i<s.size()-1;i++) { 
		if(s[i]==s[i+1]){
			lenhh++;
			if(lenhh>res){
				res=lenhh;
				kt=s[i]; 
			} 
			else if(lenhh==res) {
				kt=max(kt,s[i]); 
			}
		} 
		else{ 
			if(lenhh>res){
				res=lenhh;
				kt=s[i]; 
			} 
			else if(lenhh==res) {
				kt=max(kt,s[i]); 
			}
			lenhh=1;	 
		} 
	}
	if(res==1&&s[s.size()-1]>kt) kt=s[s.size()-1];
	for(int i=0;i<res;i++) cout<<kt;
	return 0; 
}
