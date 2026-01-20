#include<iostream>

using namespace std;

int main() 
{
	int n,m; cin>>n>>m;
	if(n<m) cout<<-1;
	else{
		cout<<(n-n/2+m-1)/m*m; 
	} 
	return 0; 
}
