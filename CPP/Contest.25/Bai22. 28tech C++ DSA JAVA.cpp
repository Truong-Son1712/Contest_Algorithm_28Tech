#include<iostream>

using namespace std;

long long F[61];
void ktao() 
{
	F[1]=1; F[2]=1; F[3]=2;
	for(int i=4;i<61;i++){
		F[i]=F[i-3]+F[i-2]+F[i-1];
	} 
}
string ketqua(int n,long long k) 
{
	if(n==1&&k==1) return "28tech";
	else if(n==2&&k==1) return "C++";
	else if(n==3){
		if(k==1) return "DSA";
		else return "JAVA"; 
	} 
	if(k<=F[n-3]) return ketqua(n-3,k) ;
	else if(k-F[n-3]<=F[n-2]) return ketqua(n-2,k-F[n-3]);
	else return ketqua(n-1,k-F[n-3]-F[n-2]); 
}
int main() 
{
	int T; cin>>T;
	ktao(); 
	while(T--) 
	{
		int n; long long k; cin>>n>>k;
		cout<<ketqua(n,k)<<endl; 
	}
	return 0; 
}
