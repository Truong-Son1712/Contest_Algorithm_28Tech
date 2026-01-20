#include<iostream>
#include<algorithm>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);
	long long sum=0;
	int dem=0; 
	for(int i=0;i<n;i++){
		if(a[i]>=sum){
			dem++;
			sum+=a[i]; 
		} 
	}
	cout<<dem;
	return 0; 
}
