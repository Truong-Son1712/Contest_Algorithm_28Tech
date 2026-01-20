#include<iostream>
#include<algorithm>
 
using namespace std;

int n,a[100],ok=1;
void ktao() 
{
	for(int i=1;i<=n;i++) a[i]=n+1-i; 
}
void sinh() 
{
	int i=n-1;
	while(i>=1&& a[i]<a[i+1]){
		--i; 
	} 
	if(i==0) ok=0;
	else{
		int j=n;
		reverse(a+i+1,a+n+1);
		while(a[i]>a[j]){
			j--; 
		} 
		swap(a[i],a[j+1]); 
	} 
}
int main()
{
	cin>>n;
	ktao();
	while(ok){
		for(int i=1;i<=n;i++) cout<<a[i];
		cout<<endl;
		sinh(); 
	} 
	return 0; 
}
