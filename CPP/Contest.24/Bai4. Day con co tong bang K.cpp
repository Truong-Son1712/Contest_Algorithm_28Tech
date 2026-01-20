#include<iostream>
#include<algorithm>

using namespace std;

int n,k, res=0; 
pair<int,int> x[100];
bool check() 
{
	int sum=0; 
	for(int i=1;i<=n;i++){
		if(x[i].first==0) sum+=x[i].second; 
	} 
	return sum==k; 
}
void inkq()
{
	string s=""; 
	s+="[" ;
	for(int i=1;i<=n;i++)
		if(x[i].first==0) s+=to_string(x[i].second)+" "; 
	s.pop_back();
	s+="]";
	cout<<s<<endl; 
} 
void Try(int i) 
{
	for(int j=0;j<=1;j++) 
	{
		x[i].first=j;
		if(i==n){
 			if(check()){
 				res=1; 
 				inkq(); 
			 } 
		}
		else{
			Try(i+1); 
		} 
	}
}
bool cmp(pair<int,int> a, pair<int,int> b)
{
	return a.second<b.second;
}
int main() 
{
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x[i].second;
		x[i].first=0; 
	} 
	sort(x,x+n+1,cmp);
	Try(1);
	if(res==0) cout<<"-1"; 
	return 0; 
}
