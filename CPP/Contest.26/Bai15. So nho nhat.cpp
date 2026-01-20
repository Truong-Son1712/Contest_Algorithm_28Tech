#include<iostream>
#include<string>

using namespace std;

int main() 
{
	int sum,len; cin>>sum>>len;
	string s(len,'0');
	s[0]='1';
	sum-=1; 
	for(int i=s.size()-1;i>=0;i--){
		if(sum>=9&&i>0){
			s[i]='9';
			sum-=9; 
		}else if(sum>=9&&i==0){
			cout<<-1;
			return 0; 
		}else if(sum<9){
			s[i]=(char)(s[i]+sum);
			sum=0; 
		} 
	} 
	cout<<s;
	return 0; 
}
