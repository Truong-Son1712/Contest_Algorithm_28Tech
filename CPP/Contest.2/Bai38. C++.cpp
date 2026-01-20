#include<iostream>
#include<map>

using namespace std;

int main()
{
	char c; int n; cin>>n; 
	map<char,int> mp;
	while(n--){
		cin>>c; 
		mp[c]++; 
	}
	if(mp['C']>=1&&mp['+']>=2) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
