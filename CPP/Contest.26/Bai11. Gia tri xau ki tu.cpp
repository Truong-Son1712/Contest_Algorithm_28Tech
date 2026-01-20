#include<iostream>
#include<queue> 
#include<map> 

using namespace std;
 
int main() 
{
	int T; cin>>T;
	while(T--)	
	{
		int k; cin>>k;
		string s; cin>>s;
		map<char,int> mp; 
		for(char x:s) mp[x]++;
		priority_queue<int> pq;
		for(auto x:mp){
			pq.push(x.second); 
		}
		while(k--){
			int x=pq.top();
			pq.pop();
			if(x>0) x--;  
			pq.push(x); 
		} 
		long long ans=0; 
		while(pq.size()>0){
			int x=pq.top(); pq.pop();
			ans+=(long long)x*x; 
		}
		cout<<ans<<endl; 
	}
	return 0; 
}
