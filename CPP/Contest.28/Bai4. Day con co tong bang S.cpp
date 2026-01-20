#include<iostream> 
#include<cstring> 

using namespace std;

bool F[1000001];
int main() 
{
	int n,s; cin>>n>>s;
	int a[n+1] ;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	memset(F,false,sizeof(F)); 
	F[0]=true; 
	for(int i=1;i<=n;i++){
		for(int j=s;j>=a[i];j--){
			if(F[j-a[i]]==true){
				F[j]=true; 
			} 
		} 
	}
	cout<<F[s]; 
	return 0; 
}
