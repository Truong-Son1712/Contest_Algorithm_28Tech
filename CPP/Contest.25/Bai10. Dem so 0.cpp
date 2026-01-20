#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	auto it=lower_bound(a,a+n,1);
	cout<<it-a;
	return 0; 
}
