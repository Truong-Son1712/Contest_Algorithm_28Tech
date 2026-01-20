#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	int n; cin>>n;
	for(int i=0; i<n;i++){
		int res; cin>>res;
		if(res==1){
			int num; cin>>num;
			v.push_back(num); 
		} 
		else if(res==2&&v.size()!=0) 
			v.pop_back();
	}
	for(int i=0;i<v.size();i++) 
		cout<<v[i]<<" ";
	return 0; 
 } 
