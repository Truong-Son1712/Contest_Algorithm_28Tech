#include<iostream>
#include<algorithm>
 
using namespace std;

int main() 
{
	int n,k; cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);
	k=min(k,n-k);
	long long summin=0,summax=0;
	for(int i=0;i<k;i++) summin+=a[i];
	for(int i=k;i<n;i++) summax+=a[i];
	cout<<summax-summin;
	return 0; 
}
