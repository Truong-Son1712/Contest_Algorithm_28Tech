#include<iostream> 

using namespace std;

int pmire[1000005];
void sang()
{
	for(int i=2;i<=1000000;i++)
		pmire[i]=1;
	for(int i=2;i<1000;i++){
		if(pmire[i]){
			for(int j=i*i;j<=1e6;j+=i) 
				pmire[j]=0; 
		}
	} 
}
int F[1000005]; 
int main() 
{
	sang();
	int cnt=0;
	for(int i=1;i<=1e6;i++){
		if(pmire[i]) cnt++;
		F[i]=cnt; 
	} 
	int q; cin>>q;
	while(q--){
		int L,R; cin>>L>>R;
		cout<<F[R]-F[L-1]<<endl; 
	} 
	return 0; 
}
