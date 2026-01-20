#include<iostream>
#include<vector>
#include<string> 

using namespace std;

long long a[301] ;
string s; int ok=1;
void ktao()
{
	s = string(19,'0'); 
}
void sinh() 
{
	int i=s.size()-1;
	while(i>=0&& s[i]=='8'){
		s[i]='0';
		--i; 
	} 
	if(i==-1) ok=0; 
	else s[i]='8'; 
}
int main() 
{
	vector<string> v;
	vector<long long> h;
	ktao(); 
	while(ok){
		v.push_back(s); 
		sinh(); 
	} 
	for(int i=1;i<=300;i++) {
		for(string x: v) {
			long long tmp=stoll(x);
			if(tmp!=0&&tmp%i==0){
				a[i]=tmp;
				break; 
			} 
		}
	}
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		h.push_back(a[n]); 
	}
	for(auto x: h){
		cout<<x<<endl; 
	} 
	return 0; 
}
 
