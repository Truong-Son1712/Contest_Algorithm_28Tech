#include<iostream>

using namespace std;

int main() 
{
	int a,b,n; cin>>a>>b>>n;
	for(int x=0;x<=1000;x++){
		for(int y=0;y<=1000;y++){
			if(a*x+b*y==n){
				cout<<"YES";
				return 0; 
			}
		} 
	} 
	cout<<"NO";
	return 0; 
}
