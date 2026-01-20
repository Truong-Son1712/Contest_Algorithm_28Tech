#include<iostream>
#include<algorithm>
 
using namespace std;

struct job 
{
	int bd,kt,ln;
	friend istream& operator >>(istream& in,job &x){
		cin>>x.bd>>x.kt>>x.ln;
		return in; 
	} 
};
bool cmp(job a,job b) 
{
	if(a.kt!=b.kt) return a.kt<b.kt; 
	else return a.bd>b.bd ;
}
long long F[100000001]; 
int main() 
{
	int n; cin>>n; 
	job a[n];
	for(job &x:a) cin>>x;
	sort(a,a+n,cmp);
	int b[n];
	for(int i=0;i<n;i++){
		b[i]=a[i].kt; 
	} 
	F[0]=a[0].ln; 
	for(int i=1;i<n;i++){
		auto it=lower_bound(b,b+n,a[i].bd);
		if(it!=b){
			it--; 
			F[i]=max(F[i-1],F[it-b]+a[i].ln);
		}else{
			F[i]=max(F[i-1],(long long)a[i].ln); 
		} 
	} 
	cout<<F[n-1];
	return 0; 
}
