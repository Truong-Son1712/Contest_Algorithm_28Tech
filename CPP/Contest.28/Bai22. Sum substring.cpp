#include<iostream>
#include<string>

using namespace std;

int main() 
{
	long long F[12] ;
	string s; cin>>s;
	long long ans=0; 
	F[0]=s[0]-'0'; 
	for(int i=1;i<s.size();i++){
		long long res=0;
		string m=""; 
		for(int j=i;j>=0;j--){
			m=s[j]+m;
			res+=stoll(m); 
		} 
		F[i]=F[i-1]+res; 
	}
	cout<<F[s.size()-1];
	return 0; 
}
