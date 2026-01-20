#include<iostream>
#include<algorithm> 
#include<string> 

using namespace std;

string s;
int n, ok=1; 
void sinh() 
{
	int i=n-2;
	while(i>=0&&s[i]>=s[i+1]){
		--i; 
	} 
	if(i==-1)ok=0;
	else{
		int j=n-1;
		while(s[i]>=s[j]) {
			--j; 
		}
		swap(s[i],s[j]) ;
		reverse(s.begin()+i+1,s.end()); 
	} 
}
int main() 
{
	cin>>s; n=s.size();
	sinh();
	if(ok!=0) cout<<s;
	else cout<<"NOT EXIST";
	return 0; 
}
