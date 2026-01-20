#include<iostream> 
#include<cstring> 

using namespace std;

int n, c[105][105], x[100], used[105], d=0, ans=INT_MAX, cmin=INT_MAX;
void nhap() 
{
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
			if(c[i][j]!=0){
				cmin=min(cmin,c[i][j]) ;
			} 
		} 
	} 
	memset(used,0,sizeof(used)); 
}
void Try(int i) 
{
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			used[j]=1;
			x[i]=j;
			d+=c[x[i-1]][x[i]] ;
			if(i==n) ans=min(ans,d+c[x[n]][1]);
			else if(d+(n-i+1)*cmin<ans){
				Try(i+1); 
			}
			used[j]=0;
			d-=c[x[i-1]][x[i]]; 
		} 
	} 
}
int main() 
{
	nhap();
	x[1]=1; used[1]=1;
	Try(2);
	cout<<ans;
	return 0; 
}

