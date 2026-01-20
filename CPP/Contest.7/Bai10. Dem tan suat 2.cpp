#include<iostream>
#include<vector>
#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int n; cin>>n;
	char a[n]; 
	vector<pair<char,int> > v;
	for(int i=0; i<n;i++){
		cin>>a[i]; 
	} 
	for(int i=0; i<n ; i++){
		bool check=false;
		for(int j=0;j<v.size();j++)
			if(a[i]==v[j].first){
				check=true;
				v[j].second++;
				break; 
			} 
		if(check==false) v.push_back(make_pair(a[i],1));	
	} 
	cout<<v.size()<<endl; 
	for(int i=0; i<v.size();i++)
		cout<<v[i].first<<" "<<v[i].second<<endl;
	return 0; 
 } 
