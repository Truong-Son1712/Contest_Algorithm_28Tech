#include<iostream>
#include<string>

using namespace std;

int n,k, a[100], ok;
bool check1()
{
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) cnt++; 
	} 
	return cnt==k; 
}
bool check2() 
{
	int cnt=0, dem=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			cnt++; 
		}else{
			if(cnt>k) return false;
			if(cnt==k) dem++;
			cnt=0; 
		} 
	} 
	if(cnt>k) return false;
	else if( cnt==k) dem++;
	return dem==1; 
}
void ktao()
{
	for(int i=1;i<=n;i++) a[i]=0; 
}
void sinh() 
{
	int i=n;
	while(i>=1&& a[i]==1) {
		a[i]=0;
		--i; 
	}
	if(i==0) ok=0;
	else a[i]=1; 
}
int main() 
{
	cin>>n>>k;
	ktao(); ok=1; 
	while(ok){
		if(check1()){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
		}
		sinh(); 
	} 
	cout<<endl;
	ktao(); ok=1; 
	while(ok){
		if(check2()){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
		}
		sinh(); 
	} 
	return 0; 
}
