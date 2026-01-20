#include<iostream>
#include<map>
 
using namespace std; 

int main() 
{
	int n; cin>>n;
	int a[n+1];
	int F[n+1]; 
	int k=0 ; 
	map<int,int>mp; 
	int res=0;
	mp[0]=1; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]%2==0) k++;
		else k--;
		F[i]=k; 
		res+=mp[F[i]]; 
		mp[F[i]]++; 
	} 
	cout<<res;
	return 0; 
}
