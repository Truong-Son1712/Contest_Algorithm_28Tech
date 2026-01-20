#include<iostream>
#include<algorithm>
#include<numeric>
#include<math.h>
#include<vector>
 
using namespace std;

long long hieu(vector<int>v,int k) 
{
	sort(v.begin(),v.end());
	int n=v.size();
	long long sum1=0, sum2=0; 
	k=min(k,n-k); 
	for(int i=0;i<n;i++){
		if(i<k) sum1+=v[i];
		else sum2+=v[i]; 
	} 
	long long hieu=sum2-sum1; 
	return hieu; 
} 
int main() 
{
	vector<int>a;
	int n,k ;cin>>n>>k;
	a.resize(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<hieu(a,k) ;
	return 0; 
}
