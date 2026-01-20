#include<iostream>
#include<vector> 
#include<string>
#include<algorithm> 
 
using namespace std;

int n;
pair<int,int> x[100];
vector<string> q; 
void nhap() 
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i].second;
		x[i].first=0; 
	} 
}
void them() 
{
	string s="" ;
	for(int i=1;i<=n;i++){
		if(x[i].first==1) s+=to_string(x[i].second)+" "; 
	} 
	q.push_back(s); 
}
bool check() 
{
	vector<int> v; 
	for(int i=1;i<=n;i++){
		if(x[i].first==1) v.push_back(x[i].second); 
	} 
	if(v.size()<2) return false; 
	for(int i=0;i<v.size();i++) {
		if(v[i]<v[i-1]) return false; 
	}
	return true; 
}
void Try(int i) 
{
	for(int j=0;j<=1;j++){
		x[i].first=j ;
		if(i==n){
			if(check()){
				them(); 
			} 
		}else{
			Try(i+1); 
		} 
	} 
}
int main() 
{
	nhap();
	Try(1);
	sort(q.begin(),q.end());
	for(auto x:q) cout<<x<<endl; 
	return 0; 
}
