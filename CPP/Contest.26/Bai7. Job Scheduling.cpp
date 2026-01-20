#include<iostream>
#include<algorithm> 

using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b) 
{
	if(a.second!=b.second) return a.second<b.second;
	else return a.first>b.first;
}
int main() 
{
	int n; cin>>n;
	vector<pair<int,int> >v;
	while(n--) 
	{
		int a,b; cin>>a>>b;
		v.push_back({a,b}); 
	}
	sort(v.begin(),v.end(),cmp);
	int dem=1, kt=v[0].second; 
	for(int i=1;i<v.size();i++){
		 if(v[i].first>=kt){
		 	dem++;
			kt=v[i].second; 
		 }
	}
	cout<<dem;
	return 0; 
}
