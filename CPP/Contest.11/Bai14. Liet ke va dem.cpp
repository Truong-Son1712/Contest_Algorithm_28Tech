#include<iostream>
#include<vector> 

using namespace std;

bool check(int n) 
{
	if(n<=9) return true; 
	while(n>10){
		int du1=0,du2=0; 
		du1=n%10;
		du2=(n%100)/10;
		if(du2>du1) return false;
		n=n/10; 
	} 
	return true; 
}
vector<pair<int,int> > demtansuat(vector<int>a) 
{
	int n=a.size(); 
	vector<pair<int,int> >v;
	for(int i=0;i<n;i++){
		if(check(a[i])){
			bool check=false; 
			for(int j=0;j<v.size();j++){
				if(a[i]==v[j].first){
					v[j].second++;
					check=true; 
				}
			} 
			if(check==false)
				v.push_back(make_pair(a[i],1)); 
		}
	}
	return v; 
}
void sapxep(vector<pair<int,int> >&v) 
{
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(v[j].second>v[i].second) swap(v[i],v[j]);
			if(v[j].second==v[i].second&&v[j].first<v[i].first) swap(v[i],v[j]); 
		} 
	} 
}
int main() 
{
	vector<int> a;
	int num;
	while(cin>>num){
		a.push_back(num); 
	} 
	vector<pair<int,int> > luu=demtansuat(a);
	sapxep(luu); 
	for(int i=0;i<luu.size();i++)
		cout<<luu[i].first<<" "<<luu[i].second<<endl;
	return 0; 
	 
}
