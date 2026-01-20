#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int a,int b) 
{
	 if(a==0)return false;
    else if(a!=0&&b==0) return true;    
    else if(a!=0&&b!=0) return false; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0; 
}
