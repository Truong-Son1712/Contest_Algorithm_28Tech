#include<iostream>
#include<string>
#include<algorithm> 
#include<map> 

using namespace std;

int n, ok=1;
int a[100];
map<string,int> mp; 
void ktao() 
{
	for(int i=1;i<=n;i++){
		a[i]=i ;
	} 
}
void sinh() 
{
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		--i; 
	} 
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[i]>a[j]){
			--j; 
		} 
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	} 
}
int main() 
{
	cin>>n;
	string s; scanf("\n"); getline(cin,s);
	s.pop_back(); 
	ktao();
	int tt=1; 
	while(ok){
		string x; 
		for(int i=1;i<=n;i++){ 
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
