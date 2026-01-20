#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip> 
#include<bits/stdc++.h> 

using namespace std;

int dem(long long m) 
{
	int dem=0; 
	while(m>0){
		dem++;
		m/=10; 
	}
	return dem; 
}
int main() 
{
	int x,y,z,n; cin>>x>>y>>z>>n;
	long long gcd= __gcd(x,__gcd(y,z));
	long long m=(long long)x*y*z/gcd; 
	long long k=1;
	for(int i=1;i<n;i++){
		k*=10; 
	}
	if(k*10<m){
		cout<<-1; 
	} else{
		cout<<(k/m+1)*m; 
	} 
	return 0; 
}
