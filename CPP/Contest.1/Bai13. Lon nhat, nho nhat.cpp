#include<iostream>
#include<math.h>
#include<algorithm> 

using namespace std;

int main() 
{
	int x,y,z,t; cin>>x>>y>>z>>t;
	cout<<max(x,y)<<endl<<min(z,t)<<endl<<max({x,y,z})<<endl<<min({x,y,z,t}) ;
	return 0; 
}
