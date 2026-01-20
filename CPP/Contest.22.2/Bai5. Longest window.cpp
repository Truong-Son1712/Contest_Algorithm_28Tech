#include<iostream>
#include<set>
#include<map> 

using namespace std;

int main() 
{
	string a; cin>>a;
	int ans=0;
	map <char,int> mp; 
	int l=0,r;
	for(r=0;r<a.size();r++){
		mp[a[r]]++;
		while(mp[a[r]]>1){
			if(mp[a[l]]>1) mp[a[l]]--;
			else mp.erase(a[l]);
			++l;  
		}
		ans=max(ans,r-l+1); 
	} 
	cout<<ans;
	return 0; 
}
