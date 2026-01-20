#include<iostream>
#include<set>
 
using namespace std;

int main() 
{
	int n; cin>>n;
	multiset<int> se;
	for(int i=0;i<n;i++){
		int num; cin>>num;
		se.insert(num); 
	} 
	
	int q; cin>>q;
	for(int i=0;i<q;i++){
		int tt, x; cin>>tt>>x;
		if(tt==1) se.insert(x);
		else if(tt==2){
			auto it=se.find(x);
			if(it!=se.end()) se.erase(it); 
		}
		else if(tt==3){
			auto it= se.lower_bound(x);
			if(it!=se.end()) cout<<*it<<endl;
			else cout<<-1<<endl; 
		} 
		else if(tt=3){
			auto it=se.upper_bound(x);
			if(it==se.begin()) cout<<-1<<endl;
			else{
				--it;
				cout<<*it<<endl; 
			} 
			 
		} 
	}
	return 0; 
}
