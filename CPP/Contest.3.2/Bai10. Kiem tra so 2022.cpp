#include<iostream>

using namespace std;

int main() 
{
	bool ok=false;
	int n; cin>>n;
	int x;
	while(n--){
		cin>>x;
		if(x==2022) ok=true; 
	} 
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
