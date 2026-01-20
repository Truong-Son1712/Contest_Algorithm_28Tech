#include<iostream> 
#include<algorithm> 

using namespace std;

int n, N, ok=1;
string a; 
bool check() 
{
	string tmp=a;
	reverse(tmp.begin(),tmp.end());
	return a==tmp; 
} 
void ktao() 
{
	ok=1; 
	a=string(n,'6'); 
}
void sinh() 
{
	int i=n-1;
	while(i>=0&&a[i]=='8'){
		a[i]='6';
		--i; 
	} 
	if(i==-1) ok=0;
	else a[i]='8'; 
}
int main()
{
	cin>>N; int dem=0;
	n=2; 
	while(dem<N){
		ktao(); 
		while(ok){
			if(check()){
				cout<<a<<" "; 
				dem++; 
			}
			if(dem==N) break; 
			sinh(); 
		} 
		n+=2;
	} 
	return 0; 
}
