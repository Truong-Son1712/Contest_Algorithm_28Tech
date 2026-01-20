#include<iostream>
#include<algorithm> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x; 
	sort(a,a+n);
	if(a[n-3]>0){
		long long tich1=(long long)a[0]*a[1]*a[n-1];
		long long tich2=(long long)a[n-1]*a[n-2]*a[n-3];
		cout<<(long long)max(tich1,tich2);
	}else if(a[n-3]<=0){
		if(a[n-1]>0){
			long long tich1=(long long)a[0]*a[1]*a[n-1];
			long long tich2=(long long)a[n-1]*a[n-2];
			cout<<(long long)max(tich1,tich2);
		}
		else if(a[n-1]<=0){
			cout<<(long long)a[0]*a[1]; 
		} 
	}
	return 0; 
}
