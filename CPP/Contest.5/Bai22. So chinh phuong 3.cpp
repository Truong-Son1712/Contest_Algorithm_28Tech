#include<iostream>
#include<math.h>
#include<cstring>
#include<vector> 
#include<algorithm>
 
using namespace std;
 
int main() 
{
	long long a,b; cin>>a>>b;
	long long cuoi=sqrt(b);
	long long dau=ceil((double)sqrt(a));
	cout<<cuoi-dau+1; 
	return 0; 
}
