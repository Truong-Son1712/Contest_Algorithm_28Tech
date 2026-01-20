#include<iostream>

using namespace std;

const int c=1e9+7;
const int n=1e6+1;
int D[n];
void ktao() 
{
	D[0]=1; D[1]=0;
	for(int i=2;i<n;i++){
		D[i]= ((D[i-1]%c)+(D[i-2]%c))%c; 
		D[i]= ((D[i]%c)*(i-1)%c)%c; 
	} 
}
int main() 
{
	ktao();
	int m; cin>>m;
	cout<<D[m];
	return 0; 
}
