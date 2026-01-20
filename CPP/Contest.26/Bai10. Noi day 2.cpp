#include<iostream>
#include<algorithm>
 
using namespace std;

const int p=1e9+7; 
int main() 
{
	int n; cin>>n;
	int a[n]; 
	for(int &x:a) cin>>x;
	sort(a,a+n,greater<int>());
	long long res=a[0]+a[1]; int cp=a[0]+a[1]; 
	for(int i=2;i<n;i++) {
		 cp+=a[i];
		 res+=cp;
		 res%=p; 
	}
	cout<<res;
	return 0; 
}
