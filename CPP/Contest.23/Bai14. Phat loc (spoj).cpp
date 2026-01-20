#include<iostream>

using namespace std;

int n, a[100], ok=1;
bool check() 
{
	if(a[1]!=1) return false;
	if(a[n]!=0) return false;
	for(int i=1;i<=n-1;i++){
		if(a[i]==1&&a[i+1]==1) return false; 
	} 
	int dem6=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0) dem6++;
		else{
			if(dem6>3) return false;
			dem6=0; 
		} 
	} 
	if(dem6>3) return false;
	return true; 
}
void ktao() 
{
	for(int i=1;i<=n;i++) a[i]=0; 
}
void sinh() 
{
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		--i; 
	} 
	if(i==0) ok=0;
	else a[i]=1; 
}
int main() 
{
	cin>>n;
	ktao();
	while(ok){
		if(check()){
			for(int i=1;i<=n;i++) {
				if(a[i]==1) cout<<8;
				else cout<<6; 
			} 
			cout<<endl; 
		} 
		sinh(); 
	} 
	if(check()){
		for(int i=1;i<=n;i++) {
			if(a[i]==1) cout<<8;
			else cout<<6;
		}
	} 
	return 0; 
}
