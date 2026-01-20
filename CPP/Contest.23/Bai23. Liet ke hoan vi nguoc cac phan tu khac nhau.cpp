#include<iostream>
#include<algorithm>
 
using namespace std;

int n,ok=1;
pair<int,int> a[100]; 
void ktao() 
{
	for(int i=1;i<=n;i++){
		 a[i].first=n+1-i; 
		 cin>>a[n+1-i].second; 
	}
}
void sinh() 
{
	int i=n-1;
	while(i>=1&& a[i].first<a[i+1].first){
		--i; 
	} 
	if(i==0) ok=0;
	else{
		int j=n;
		reverse(a+i+1,a+n+1);
		while(a[i].first>a[j].first){
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
		for(int i=1;i<=n;i++) cout<<a[i].second<<" ";
		cout<<endl;
		sinh(); 
	} 
	return 0; 
}
