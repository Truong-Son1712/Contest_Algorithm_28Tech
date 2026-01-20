#include<iostream> 
#include<cstring> 

using namespace std;

const int p=1e9+7; 
long long F[100001];
 
void ktao(int k) 
{
	memset(F,0,sizeof(F));	
	F[0]=1;
	for(int i=1;i<100001;i++) 
	{
		for(int j=i-k;j<i;j++){
			if(j>=0){
				F[i]+=F[j];
				F[i]%=p; 
			} 
		}
	}
}
int main() 
{
	int n,k; cin>>n>>k;
	ktao(k);
	cout<<F[n];
	return 0; 
}
