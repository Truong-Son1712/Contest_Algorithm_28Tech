#include<iostream>

using namespace std;

int main() 
{
	int n,m; cin>>n>>m;
	if(n%2==0) cout<<(long long)m*n/2;
	else cout<<(long long)m*(n/2)+m/2;
	return 0; 
}
