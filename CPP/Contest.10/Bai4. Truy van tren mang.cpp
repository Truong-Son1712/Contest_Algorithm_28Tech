#include<bits/stdc++.h>  
#include<set>

using namespace std;

int main() 
{
	multiset<int> se;
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		se.insert(x);	
	}
	int q; cin>>q;
	for(int i=0;i<q;i++){
		int dk,num; cin>>dk>>num;
		if(dk==1){
			se.insert(num); 
		} 
		else if(dk==2){
			if(se.count(num)!=0) {
				auto it = se.find(num);
				se.erase(it); 
				}
		} 
		else{
			if(se.count(num)!=0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl; 
		} 
	} 
	
	return 0; 
}
