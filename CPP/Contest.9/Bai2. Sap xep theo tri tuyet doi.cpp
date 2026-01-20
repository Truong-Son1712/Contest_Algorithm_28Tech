#include<iostream> 
#include<algorithm>
#include<math.h> 

using namespace std;

bool cmp1(pair<int,int>a,pair<int,int>b) 
{
	if(a.second!=b.second) return a.second<b.second;
	else return a<b; 
}
bool cmp2(int a,int b)
{
	if(a%2==0&&b%2==0) return a<b;
	else if(a%2!=0&&b%2!=0) return a>b;
	else return a%2==0&&b%2!=0; 
}
int main()  
{
	int n,x; cin>>n>>x;
	pair<int,int> a[n];
	int b[n] ;
	for(int i=0;i<n;i++){
		cin>>a[i].first;
		a[i].second=abs(x-a[i].first);
		b[i]=a[i].first; 
	}
	sort(a,a+n,cmp1);
	for(int i=0;i<n;i++) cout<<a[i].first<<" ";
	cout<<endl; 
	sort(b,b+n,cmp2);
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
	return 0; 
} 
