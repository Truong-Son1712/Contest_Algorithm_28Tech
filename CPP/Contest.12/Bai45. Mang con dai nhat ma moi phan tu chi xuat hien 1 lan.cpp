#include<iostream>
#include<set>
 
using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int cnt=0,l=0,r=0,mx=0,hh=0; 
	set<int> se; 
	while(r<n&&l<n){
		if(se.count(a[r])==0){
			se.insert(a[r]);
			cnt++;
			mx=max(mx,cnt); 
			++r; 
		}
		else{
			while(se.count(a[r])!=0){
				se.erase(a[l]);
				l++; 
				cnt--; 
			} 
			se.insert(a[r]);
			cnt++; 
			mx=max(mx,cnt); 
			++r;
			
		} 
	} 
	cout<<mx;
	return 0; 
}
