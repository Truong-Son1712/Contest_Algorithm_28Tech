#include<iostream>
#include<set>
#include<string> 
#include<algorithm>
 
using namespace std;

int n;
pair<int,int> x[100];
vector<string> v; 
void nhap() 
{
	cin>>n;
	for(int i=1;i<=n;i++){
		x[i].first=0;
		cin>>x[i].second; 
	} 
}
void xuly() 
{
	int sum=0;
	for(int i=1;i<=n;i++){
		if(x[i].first==1) sum+=x[i].second; 
	} 
	if(sum%2!=0){
		string s=""; 
		for(int i=1;i<=n;i++){
			if(x[i].first==1){
				s+=to_string(x[i].second)+" "; 
			} 
		} 
		v.push_back(s); 
	} 
}
void Try(int i) 
{
	for(int j=0;j<=1;j++){
		x[i].first=j;
		if(i==n){
			xuly(); 
		} else{
			Try(i+1); 
		} 
	} 
}
int main() 
{
	nhap();
	Try(1);
	sort(v.begin(),v.end()) ;
	for(auto x:v){
		cout<<x<<endl; 
	} 
	return 0; 
}
