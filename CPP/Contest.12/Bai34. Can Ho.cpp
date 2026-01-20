#include<iostream> 
#include<algorithm>

using namespace std;

int main() 
{
	int n,m,k; cin>>n>>m>>k;
	int a[n],b[m];
	for(int &x:a)cin>>x;
	for(int &x:b)cin>>x;
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0,res=0;
	while(i<n&&j<m){
		if(abs(a[i]-b[j])<=k){
			res++;
			i++;j++; 
		}
		else if(a[i]-b[j]<-k)++i;
		else ++j;  
	} 
	cout<<res;
	return 0; 
}
