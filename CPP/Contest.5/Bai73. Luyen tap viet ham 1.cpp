#include<iostream>
#include<math.h> 
#include<vector>
 
using namespace std;

bool check1(int n) 
{
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false; 
	} 
	return true; 
}
int check2(int n)
{
	int dum=0;
	while(n>0) 
	{
		dum+=n%10;
		n/=10; 
	}
	return dum; 
}
int check3(int n) 
{
	int sum=0;
	while(n>0) 
	{
		int du=n%10;
		if(du%2==0) sum+=du;
		n/=10; 
	}
	return sum; 
}
int check4(int n) 
{
	int dum=0;
	while(n>0) 
	{
		int du=n%10;
		if(check1(du)) dum+=du;
		n/=10; 
	}
	return dum; 
}
int check5(int n) 
{
	int ln=0;
	while(n>0) 
	{
		ln=ln*10+n%10;
		n/=10; 
	}
	return ln; 
}
int check6(int n) 
{
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			dem++; 
			while(n%i==0){
				n/=i; 
			} 
		} 
	} 
	if(n>1) dem++; 
	return dem; 
}
int check7(int n) 
{
	int res=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			res=max(res,i);
			while(n%i==0){
				n/=i; 
			} 
		}
	} 
	if(n>1) res=max(res,n);
	return res; 
}
bool check8(int n) 
{
	while(n>0){
		if(n%10==6) return true;
		n/=10; 
	} 
	return false; 
}
bool check9(int n) 
{
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10; 
	} 
	return sum%8==0; 
}
long long giaithua(int n) 
{
	long long res=1;
	for(int i=1;i<=n;i++)res*=i;
	return res; 
}
int check10(int n) 
{
	long long sum=0;
	while(n>0){
		sum+=giaithua(n%10);
		n/=10; 
	} 
	return sum; 
}
bool check11(int n) 
{
	while(n>10){
		int tr=n%10;
		n/=10;
		int sau=n%10;
		if(tr!=sau) return false; 
	} 
	return true; 
}
bool check12(int n) 
{
	int cuoi=n%10;
	while(n>0) 
	{
		if(n%10>cuoi) return false;
		n/=10; 
	}
	return true; 
}
int check13(int n) 
{
	 vector<int> v;
	 int dem=0;
	 while(n>0) 
	 {
	 	v.push_back(n%10);
		 dem++;
		 n/=10; 
	 }
	 int sum=0;
	 for(int i=0;i<v.size();i++) 
	 {
	 	int res=1; 
	 	for(int j=1;j<=dem;j++){
	 		 res*=v[i]; 
		 } 
		sum+=res; 
	 }
	 return sum; 
}
int main() 
{
	int n; cin>>n;
	cout<<check1(n)<<endl<<check2(n)<<endl<<check3(n)<<endl<<check4(n)<<endl<<check5(n)<<endl<<check6(n)<<endl<<check7(n)<<endl<<check8(n)<<endl<<check9(n)<<endl;
	cout<<check10(n)<<endl<<check11(n)<<endl<<check12(n)<<endl<<check13(n)<<endl;
	return 0; 
}
