#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long n; cin>>n;
	int mu=0, so=1e9, cur_mu=0, cur_so=1; 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cur_mu=0, cur_so=i; 
			while(n%i==0){
				cur_mu++; 
				n/=i; 
			} 
			if(cur_mu>mu){
				mu=cur_mu;
				so=cur_so; 
			}  
			else if(cur_mu==mu){
				so=min(so,cur_so);
			}
		} 
	} 
	cout<<so<<" "<<mu;
	return 0; 
}
