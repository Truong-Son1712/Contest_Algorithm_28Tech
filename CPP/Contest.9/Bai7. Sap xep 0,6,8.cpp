#include<iostream>
#include<algorithm>

using namespace std;

int demso(int n) 
{
	int dem=0;
	while(n>0){
		int du=n%10;
		if(du==0||du==6||du==8) dem++;
		n=n/10; 
	} 
	return dem; 
}
bool cmp(int a,int b) 
{
	if(demso(a)!=demso(b)) return demso(a)>demso(b);
	else return a<b; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0; 
}
