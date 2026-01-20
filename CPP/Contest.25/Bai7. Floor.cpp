#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n,k; cin>>n>>k; 
	int a[n];
	for(int &x:a) cin>>x;
	auto it=upper_bound(a,a+n,k);
	if(it==a){
		cout<<-1;
		return 0; 
	}else{
		it--; 
	} 
	cout<<*it;
	return 0;
}
