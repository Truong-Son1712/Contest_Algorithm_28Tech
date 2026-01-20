#include<iostream>
#include<cstring> 

using namespace std;

int n,s,MAX=0, x[100]; 
pair<int,int> a[100];

void Try(int i,int tronglg,int giatri) 
{
	if(i==n+1){
		if(tronglg<=s&&giatri>MAX){
			MAX=giatri; 
		} 
		return;
	} 
	Try(i+1,tronglg,giatri);
	if(tronglg+a[i].first<=s){
		Try(i+1,tronglg+a[i].first,giatri+a[i].second); 
	} 
}
int main() 
{
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i].first;
	for(int i=1;i<=n;i++) cin>>a[i].second;
	Try(1,0,0); 
	cout<<MAX; 
	return 0; 
}
