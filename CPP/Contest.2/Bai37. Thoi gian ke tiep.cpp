#include<iostream> 
#include<iomanip> 

using namespace std;

int main() 
{
	int h,m,k; cin>>h>>m>>k; 
	int cnt_h, cmt_m;
	k+=m;
	m=k%28;
	h+=k/28;
	h%=28;
	cout<<setfill('0')<<setw(2)<<h<<"h:"<<setfill('0')<<setw(2)<<m<<"m";
	return 0; 
}
