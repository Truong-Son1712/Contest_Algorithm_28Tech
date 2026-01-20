#include<iostream> 
#include<algorithm>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,greater<int>());
	long long sum=0;
	for(int i=0;i<n;i++){
		if(a[i]-i>0){
			sum+=a[i]-i; 
		} 
	}
	cout<<sum;
	return 0; 
}
