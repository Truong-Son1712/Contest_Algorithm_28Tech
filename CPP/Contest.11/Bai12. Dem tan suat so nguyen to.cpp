#include<iostream>
#include<vector>
#include<math.h> 
 
using namespace std;

bool ngto(int n) 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return n>1; 
}
vector<pair<int,int> > demtansuat(vector<int>a) 
{
	int n=a.size(); 
	vector<pair<int,int> >v;
	for(int i=0;i<n;i++){
		if(ngto(a[i])){
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
int main() 
{
	vector<int> a;
	int num;
	while(cin>>num){
		a.push_back(num); 
	} 
	vector<pair<int,int> > luu=demtansuat(a);
	for(int i=0;i<luu.size();i++)
		cout<<luu[i].first<<" "<<luu[i].second<<endl;
	return 0; 
}
