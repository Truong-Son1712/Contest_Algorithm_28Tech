#include<iostream>
#include<map>
#include<string>
 
using namespace std;

int n, k,a[100],ok;
map<string,int> mp; 
void ktao()
{
	for(int i=1;i<=k;i++) a[i]=n-k+i; 
} 
void sinh() 
{
	int i=k;
	while(i>=1&&a[i-1]==a[i]-1){
		--i; 
	} 
	if(i==0) ok=0;
	else{
		a[i]--;
		for(int j=k;j>=i+1;j--){
			a[j]=n-k+j; 
		} 
	} 
}
int main() 
{
	cin>>n>>k; 
	ktao(); ok=1;
	string s; scanf("\n"); getline(cin,s) ;
	s.pop_back(); 
	int tt=1; 
	while(ok) {
		string x=""; 
		for(int i=1;i<=k;i++){
			x+=to_string(a[i])+" "; 
		}
		x.pop_back(); 
		mp.insert({x,tt});
		tt++; 
		sinh(); 
	}
	cout<<mp[s]; 
	return 0; 
}
