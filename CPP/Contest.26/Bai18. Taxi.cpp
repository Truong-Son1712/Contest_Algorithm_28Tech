#include<iostream>
#include<map>
#include<math.h> 

using namespace std;

int main() 
{
	map<int,int> mp;
	int n; cin>>n;
	int a[n];
	for(int &x:a){
		cin>>x;
		mp[x]++; 
	} 
	int res=mp[4];
	int t=min(mp[3],mp[1]);
	res+=t;
	mp[3]-=t;
	mp[1]-=t;
	res+=mp[3];
	int t2=min(mp[1],mp[2]*2);
	res+=ceil((double)t2/2);
	mp[1]-=t2;
	mp[2]-=ceil((double)t2/2);
	res+=ceil(mp[1]/4);
	res+=ceil(mp[2]/2);
	cout<<res; 
}
