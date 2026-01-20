#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n; cin>>n;
	int a[n];
	vector<pair<int,int> > luu; 
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		bool check=false;
		for(int j=0;j<luu.size();j++){
			if(a[i]==luu[j].first){
				check= true;
				luu[j].second++;
				break; 
			} 
		} 
		if(check==false) luu.push_back(make_pair(a[i],1)); 
	} 
	for(int i=0;i<luu.size();i++)
		cout<<luu[i].first<<" "<<luu[i].second<<endl;
	return 0; 
  }  
