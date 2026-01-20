#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int F[100];
vector<long long> v; 

void ktao()
{
	F[0]=0; F[1]=1;
	v.push_back(F[0]);
	v.push_back(F[1]); 
	for(int i=2;i<93;i++){
		F[i]=F[i-1]+F[i-2]; 
		v.push_back(F[i]); 
	}	
} 
int main() 
{
	long long n; cin>>n;
	ktao(); 
	for(int i=0;i<=v.size();i++){
		if(v[i]==n){
			cout<<"YES";
			return 0; 
		} 
	} 
	cout<<"NO";
	return 0; 
}
