#include<iostream>
#include<string>
#include<math.h> 

using namespace std;

string my_to_string(long long n)
{
	long long temp=n;
	n=abs(n); 
	string s;
	while(n>0){
		int du=n%10;
		s+=(char)'0'+du;
		n=n/10; 
	} 
	string s1;
	if(temp<0) s1+='-';
	else if(temp==0) s1+='0'; 
	for(int i=0;i<s.size();i++)
		s1+=s[s.size()-1-i];
	return s1; 
}
int main() 
{
	long long n; cin>>n; 
	cout<< my_to_string(n);
	return 0; 
}
