#include<iostream> 
#include<set> 

using namespace std;

int main() 
{
	int n; cin>>n;
	multiset<int> ms;
	for(int i=0;i<n;i++) {
		int num; cin>>num;
		ms.insert(num); 
	}
	int q; cin>>q;
	for(int i=0;i<q;i++){
		int tt; cin>>tt;
		if(tt==1){
			int num; cin>>num;
			ms.insert(num); 
		} 
		else if(tt==2){
			int num; cin>>num;
			if(ms.count(num)!=0) ms.erase(num); 
		} 
		else if(tt==3){
			auto it=ms.begin();
			cout<<*it<<endl;
		}
		else{
			auto it=ms.rbegin();
			cout<<*it<<endl; 
		} 
	} 
	return 0; 
}
