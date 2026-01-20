#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int so=-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(so==1) cout<<1;
			else cout<<0;
			so=-so;
		}
		cout<<endl; 
	}
}
