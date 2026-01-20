#include<iostream>
#include<cstring>
#include<math.h>
#include<vector> 

using namespace std;

const int n=100001;
bool nt[n];
void sang() 
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false;
	for(int i=2;i<=sqrt(n);i++){
		if(nt[i]){
			for(int j=i*i;j<=n;j+=i) nt[j]=false; 
		} 
	}	
}
int main() 
{
	sang();
	vector<int>v;
	for(int i=2;i<=n;i++){
		if(nt[i])v.push_back(i);
	}
	int m; cin>>m;
	cout<<1<<endl;
	for(int i=2;i<=m;i++){
		for(int j=0;j<=v.size();j++){
			if(i%v[j]==0){
				cout<<v[j]<<endl; 
				break; 
			} 
		} 
	} 
	return 0; 
}

