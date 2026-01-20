#include<iostream>
#include<algorithm>

using namespace std;

const int p=1e9+7; 
int main() 
{
	int n; cin>>n; 
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);
	long long res=0; 
	for(int i=0;i<n;i++){
		res+=a[i]*i;
		res%=p; 
	} 
	cout<<res;
	return 0; 
}
