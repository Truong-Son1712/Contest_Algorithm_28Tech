#include<iostream>
#include<math.h>
#include<cstring>
#include<vector> 
#include<algorithm>
 
using namespace std;
 
int main() 
{
	long long a,b; cin>>a>>b;
	vector<long long> v; 
	for(int i=1;i*i<=b;i++) v.push_back(i*i);
	auto it=lower_bound(v.begin(),v.end(),a);
	int chiso=it-v.begin();
	for(int i=chiso;i<v.size();i++) cout<<v[i]<<" ";
	return 0; 
}
