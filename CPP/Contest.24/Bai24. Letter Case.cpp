#include<iostream>
#include<string>
#include<set>
 
using namespace std;

int n;
pair<int,char> x[100];
string s; 
set<string> se; 
void ktao() 
{
	for(int i=1;i<=s.size();i++){
		x[i].first=0;
		x[i].second=s[i-1]; 
	} 
}
void in() 
{
	string s="";
	for(int i=1;i<=n;i++){
		if(x[i].first==0){
			s+=(char)toupper(x[i].second) ;
		}else{
			s+=(char)tolower(x[i].second); 
		} 
	} 
	se.insert(s); 
}
void Try(int i) 
{
	for(int j=0;j<=1;j++){
		x[i].first=j;
		if(i==n){
			in(); 
		}else{
			Try(i+1); 
		} 
	} 
}
int main() 
{
	cin>>s;
	ktao(); 
	n=s.size(); 
	Try(1);
	for(auto x: se){
		cout<<x<<endl; 
	} 
	return 0; 
}
