#include<iostream>
#include<math.h>
#include<map>
 
using namespace std;

int main() 
{
	int n; cin>>n; 
	int res=1;
	for(int i=1;i<n;i++){
		res*=i;
		while(res%10==0){
			res/=10; 
		} 
		res%=100000; 
	} 
	cout<<res%10;
	return 0; 
}
