#include<iostream>
#include<math.h>
#include<vector> 

using namespace std;

bool check1(long long n)
{
	int demc=0;
	while(n>0){
		int du=n%10;
		if(du%2==0) demc++;
		n/=10; 
	} 
	return demc%2!=0; 
}
bool check2(long long n) 
{
	int demc=0, deml=0;
	while(n>0){
		int du=n%10;
		if(du%2==0) demc++;
		else deml++;
		n/=10; 
	} 
	return demc>deml; 
}
bool check3(long long n) 
{
	int cuoi=n%10;
	while(n>10){
		n/=10; 
	} 
	return cuoi==n; 
}
bool check4(long long n) 
{
	int sum=0;
	while(n>0) 
	{
		sum+=n%10;
		n/=10; 
	}
	return sum%10==8; 
}
bool nt(int n) 
{
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false; 
	} 
	return n>1; 
}
bool check5(long long n) 
{
	int dum=0;
	while(n>0) 
	{
		dum+=n%10;
		n/=10; 
	}
	return nt(dum); 
}
bool check6(long long n) 
{
	if(n<10) return true;
	while(n>10) 
	{
		int tr=n%10;
		n/=10;
		int sau=n%10;
		if(abs(tr-sau)!=1) return false; 
	}
	return true; 
}
bool check7(long long n) 
{
	if(n<10) return false;
	string s=to_string(n);
	char dau=s[0];
	for(int i=1;i<s.size();i++){
		if(s[i]>=dau) return false; 
	} 
	return true; 
}
vector<long long> v;
long long F[100]; 
void ktao() 
{
	F[0]=0;F[1]=1;
	for(int i=2;i<=92;i++){
		F[i]=F[i-1]+F[i-2];
		v.push_back(F[i]); 
	} 
}
bool check8(long long n) 
{
	int sum=0;
	while(n>0) 
	{
		sum+=n%10;
		n/=10; 
	}
	for(int i=0;i<v.size();i++){
		if(v[i]==sum) return true; 
	} 
	return false; 
}
bool tn(long long n) 
{
	long long tmp=n, dn=0;
	while(n>0) 
	{
		dn=dn*10+n%10;
		n/=10; 
	}
	return dn==tmp; 
}
bool check9(long long n) 
{
	long long sum=0;
	while(n>0) 
	{
		sum+=n%10;
		n/=10; 
	}
	return tn(sum); 
}
bool check10(long long n) 
{
	while(n>0) 
	{
		int du=n%10;
		if(du!=0&&du!=6&&du!=8) return false;
		n/=10; 
	}
	return true; 
}
int main() 
{
	ktao();
	int T; cin>>T;
	while(T--) 
	{
		long long n; cin>>n;
		cout<<check1(n)<<endl<<check2(n)<<endl<<check3(n)<<endl<<check4(n)<<endl<<check5(n)<<endl<<check6(n)<<endl<<check7(n)<<endl<<check8(n)<<endl<<check9(n)<<endl<<check10(n)<<endl;
		cout<<endl; 
	}
	return 0; 
}
