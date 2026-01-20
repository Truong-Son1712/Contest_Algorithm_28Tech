#include<iostream>
#include<math.h>
#include<cstring>
#include<vector> 
#include<set> 
#include<algorithm> 

using namespace std;

const int n=1e6+1;
bool sodep[n]; 
bool nt[n];
void sang() 
{
	memset(nt,true,sizeof(nt));
	nt[0]=nt[1]=false; 
	for(int i=2;i<=sqrt(n);i++){
		if(nt[i]==true){
			for(int j=i*i;j<=n;j+=i) nt[j]=false; 
		}
	} 
}
void sang2() 
{
	memset(sodep,false,sizeof(sodep));
	vector<int> v;
	for(int i=2;i<=n;i++) if(nt[i]) v.push_back(i);
	for(int i=1;i<=n;i++){
		bool ok=false; 
		for(int j=0;v[j]<=i/2;j++){
			if(i%v[j]==0){ 
				if(i%(v[j]*v[j])!=0){
					ok=false; break; 
				} else{
					ok=true; 
				} 
			} 		
		} 
		if(ok) sodep[i]=true; 
	} 
}
int main() 
{
	sang();
	sang2();
	int a,b; cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(sodep[i]) cout<<i<<" "; 
	} 
	return 0; 
}
