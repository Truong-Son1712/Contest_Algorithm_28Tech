#include<iostream>
#include<algorithm>

using namespace	std;

int main()
{
	int n,s; cin>>n>>s;
	int a[n];
	bool ok=false;
	for(int &x:a) cin>>x;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		int j=i+1,k=n-1;
		while(j<k){
			int sum=a[i]+a[j]+a[k];
			if(sum==s){
				ok=true;
				break;
			}
			else if(sum<s) j++;
			else k--;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0;
}
