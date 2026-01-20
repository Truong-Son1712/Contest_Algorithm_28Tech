#include<iostream>
#include<set>
#include<algorithm>

using namespace std; 

int main() 
{
	int n; cin>>n;
	int a[n];
	multiset<int> ms; 
	for(int &x:a) cin>>x;
	long long sum=0; 
	for(int i=n-1;i>=0;i--){
		ms.insert(a[i]);
		auto it=ms.lower_bound(a[i]);
		int x=distance(ms.begin(),it); 
		sum+=x; 
	} 
	cout<<sum; 
	return 0; 
}
