#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,s; cin>>n>>s;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);
	bool ok=false;
	for(int i=0;i<n;i++){
		if(i>s/4){
			break;
		}
		for(int j=i+1;j<n;j++){
			int l=j+1,r=n-1;
			int sum=a[i]+a[j]+a[l]+a[r];
			while(l<r){
				if(sum==s){
					ok=true;
					break;
				}
				else if(sum<s) ++l;
				else --r;
			}
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0;
}
