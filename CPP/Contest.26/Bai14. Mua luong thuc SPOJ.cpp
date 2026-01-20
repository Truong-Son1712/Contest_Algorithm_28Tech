#include<iostream>

using namespace std;

int main() 
{
	int n,s,m; cin>>n>>s>>m;
	int socandung=s*m;
	int songaydcmua=s-s/7;
	if(n*songaydcmua<socandung){
		cout<<-1;
	}else{
		cout<<(socandung+n-1)/n; 
	} 
	return 0; 
}
