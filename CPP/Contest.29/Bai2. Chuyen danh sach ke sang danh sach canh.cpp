#include<iostream>
#include<sstream>
#include<set> 

using namespace std;


int main() 
{
	set<int> a[1001]; 
	int n; cin>>n;
	for(int i=1;i<=n;i++) {
		scanf("\n"); 
		string s; getline(cin,s);
		string world;
		stringstream ss(s); 
		while(ss>>world){
			a[i].insert(stoi(world)); 
		} 
	}
	for(int i=1;i<=n;i++){
		for(auto x:a[i]) cout<<i<<" "<<x<<endl;;
		for(int j=2;j<=n;j++){
			a[j].erase(i);
		} 
	} 
	return 0; 
}
