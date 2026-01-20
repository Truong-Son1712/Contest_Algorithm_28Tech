#include<iostream> 
#include<cstring> 
#include<numeric> 
#include<set> 
using namespace std;

bool F[1000001];
int main() 
{
	int n; cin>>n;
	int a[n+1] ;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	int s =accumulate(a+1,a+n+1,0); 
	memset(F,false,sizeof(F)); 
	F[0]=true; 
	for(int i=1;i<=n;i++){
		for(int j=s;j>=a[i];j--){
			if(F[j-a[i]]==true){
				F[j]=true; 
			} 
		} 
	}
	set<int> se;
	for(int i=0;i<=s;i++){
		if(F[i]==true) se.insert(i); 
	} 
	for(auto x: se) cout<<x<<" "; 
	return 0; 
}
