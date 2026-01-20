#include<iostream>
#include<string>

using namespace std; 

long long nhonhat(long long a)
{
	string s=to_string(a);
	for(int i=0;i<s.size();i++) 
	{
		if(s[i]=='6') s[i]='5'; 
	}
	return stoll(s); 
}
long long lonnhat(long long a)
{
	string s=to_string(a);
	for(int i=0;i<s.size();i++) 
	{
		if(s[i]=='5') s[i]='6'; 
	}
	return stoll(s); 
}
int main() 
{
	long long a,b; cin>>a>>b;
	cout<<lonnhat(a)+lonnhat(b)<<" "<<nhonhat(a)+nhonhat(b);
	return 0; 
}
