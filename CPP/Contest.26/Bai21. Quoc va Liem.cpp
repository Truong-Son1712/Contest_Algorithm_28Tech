#include<iostream>
#include<math.h> 

using namespace std;

int main() 
{
	int a,b; cin>>a>>b; 
	int lon=max(a,b); int be=a+b-lon;
	int bedu=0,londu=0; 
	int res=0; 
	if(be*2>lon){
		res+=lon/2;
		bedu=be-lon/2;
		londu=lon%2;
		if(londu+bedu>=3) res+=1; 
	}else{
		res+=be; 
	} 
	cout<<res;
	return 0; 
}
