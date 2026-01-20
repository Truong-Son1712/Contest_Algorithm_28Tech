#include<iostream>
#include<math.h> 

using namespace std;

int n,ok=1;
pair<int,int> a[100];

void ktao() 
{
	for(int i=1;i<=n;i++){
		a[i].first=0;
		cin>>a[i].second; 
	} 
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
	int res=1e9;
	cin>>n; 
	ktao(); 
	while(ok){
		int sum1=0,sum2=0;
		for(int i=1;i<=n;i++){
			if(a[i].first==1) sum1+=a[i].second;
			else sum2+= a[i].second; 
		} 
		res=min(res,abs(sum1-sum2)) ;
		sinh(); 
	} 
	cout<<res;
	return 0; 
}
