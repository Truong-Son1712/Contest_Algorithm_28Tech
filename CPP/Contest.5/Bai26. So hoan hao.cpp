#include<iostream>
#include<math.h>
#include<vector>
 
using namespace std;

bool nt(long long p)
{
	for(int i=2;i<=sqrt(p);i++){
		if(p%i==0) return false; 
	} 
	return p>1; 
}
int main() 
{
	vector<long long> v; 
	for(int p=2;p<=32;p++){
		if(nt(p)){
			long long tmp=(long long)pow(2,p)-1;
			if(nt(tmp)){
				long long hh=(long long)pow(2,p-1)*tmp;
				v.push_back(hh); 
			} 
		} 
	}
	long long n; cin>>n; 
	for(int i=0;i<v.size();i++){
		if(v[i]==n){
			cout<<"YES";
			return 0; 
		}
	} 
	cout<<"NO";
	return 0; 
}
