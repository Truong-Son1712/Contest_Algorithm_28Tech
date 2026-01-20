#include<iostream>

using namespace std;

int n,k;
int x[100]; 
char a[100]; 
string s; 

void ktao()
{
	for(int i=1;i<=n;i++){
		a[i]=s[i-1]; 
	} 
}
void in()
{
	for(int i=1;i<=k;i++){ 
		cout<<a[x[i]];
	} 
	cout<<endl; 
}
void Try(int i) 
{
	for(int j=x[i-1];j<=n;j++){
		x[i]=j;
		if(i==k){
			in(); 
		} 
		else{
			Try(i+1); 
		} 
	} 
}
int main() 
{
	cin>>n>>k;
	cin>>s;
	ktao(); 
	x[0]=1; 
	Try(1);

}
