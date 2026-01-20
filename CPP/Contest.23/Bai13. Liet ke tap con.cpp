#include<iostream>
#include<string>
#include<vector>
#include<set> 

using namespace std;

int n,ok=1;
pair<int,int> a[100];
set<string> se; 
void ktao() 
{
	for(int i=1;i<=n;i++) {
		a[i].first=0;
		a[i].second=i;; 
	}
	a[n].first=1; 
}
void sinh() 
{
	int i=n;
	while(i>=1&&a[i].first==1){
		a[i].first=0;
		--i; 
	} 
	if(i==0) ok=0;
	else a[i].first=1; 
}
int main() 
{
	cin>>n;
	ktao();
	while(ok){
		string s;
		for(int i=1;i<=n;i++){
			if(a[i].first==1) s+=to_string(a[i].second)+" "; 
		}
		s.pop_back() ;
		se.insert(s);
		sinh(); 
	} 
	for(auto x: se) cout<<x<<endl;
	return 0; 
}
