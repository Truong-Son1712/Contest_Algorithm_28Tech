#include<iostream>

using namespace std;

int main() 
{	
	int ok=1; 
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(ok==1){
				cout<<(char)('A'+j+i-2); 
			}else{
				cout<<(char)('a'+j+i-2);
			} 
		} 
		ok=-ok;
		cout<<endl; 
	} 
	return 0; 
}
