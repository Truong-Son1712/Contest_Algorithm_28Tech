#include<iostream>
#include<string>
#include<algorithm> 

using namespace std;

int n, ok=1;
pair<int,string> a[100];
void ktao() 
{
	for(int i=1;i<=n;i++){
		a[i].first=i;
		cin>>a[i].second; 
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
	cin>>n;
	ktao();
	while(ok){
		for(int i=1;i<=n;i++) cout<<a[i].second<<" ";
		cout<<endl;
		sinh(); 
	}
	return 0; 
}
