#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int dem=0;
	vector<int> v;
	for(int i=1;i<=sqrt(n);i++){
		if(i*i==n){
			v.push_back(i);
			dem++; 
		}
		else if(n%i==0){
			v.push_back(i);
			v.push_back(n/i);
			dem+=2; 
		} 
	}
	cout<<dem<<endl;
	sort(v.begin(),v.end());
	for(int x:v) cout<<x<<" ";
	return 0; 
}
