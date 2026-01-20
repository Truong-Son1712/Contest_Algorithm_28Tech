#include<iostream>
#include<iomanip>
#include<map>
#include<algorithm> 
#include<vector> 

using namespace std;

struct sinhvien 
{	
	string ten,ns,dc;
	double gpa;
	friend istream& operator >>(istream & in,sinhvien &x){
		scanf("\n"); getline(cin,x.ten);
		cin>>x.ns;
		scanf("\n"); getline(cin,x.dc); 
		cin>>x.gpa;
		return in; 
	}  
	friend ostream& operator <<(ostream & out,sinhvien x){
		cout<<x.ten<<" "<<x.ns<<" "<<x.dc<<" "<<fixed<<setprecision(2)<<x.gpa<<endl;
		return out; 
	}
};  
int main() 
{
	int n; cin>>n;
	sinhvien a[n];
	map<string,int> mp; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i].dc]++; 
	}
	int res=0; 
	for(auto x:mp){
		res=max(res,x.second); 
	} 
	vector<string> v;
	for(auto x:mp){
		if(x.second==res){
			v.push_back(x.first); 
		} 
	} 
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
	return 0; 
}
 
