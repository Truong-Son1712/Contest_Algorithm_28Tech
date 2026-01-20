#include<iostream> 
#include<math.h>

using namespace std;

int main() 
{
	int n,x; cin>>n>>x;
	int dem=0; 
	for(int i=1;i<=sqrt(x);i++){
		if(x%i==0&&x/i<=n){
			if(i*i==n) dem++;
			else dem+=2; 
		}
	} 
	cout<<dem; 
	return 0; 
}
