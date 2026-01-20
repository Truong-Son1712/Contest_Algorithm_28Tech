#include<iostream>
#include<set>
#include<string>
#include<algorithm>
 
using namespace std;

int n, ok=1;
string s; 
pair<int,char> a[100]; 
set<string> se;
void ktao()
{
	for(int i=1;i<=n;i++){
		a[i].first=i;
		a[i].second=s[i-1]; 
	} 
}
void sinh() 
{
	int i=n-1;
	while(i>=1&&a[i].first>a[i+1].first){
		--i; 
	} 
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[i].first>a[j].first){
			--j; 
		} 
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1); 
	}  
}
int main() 
{
	cin>>s;
	n=s.size();
	ktao();
	while(ok){
		string x; 
		for(int i=1;i<=n;i++)  x+=a[i].second;
		se.insert(x);
		sinh(); 
	} 
	for(auto x: se){
		cout<<x<<endl; 
	} 
	return 0; 
}
