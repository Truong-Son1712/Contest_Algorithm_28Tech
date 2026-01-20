#include<iostream>
#include<string>

using namespace std;

void xoa(string &s)
{
	if(s.find("111")!=string::npos){
		s.erase(s.find("111"),3);
			xoa(s); 
	} 
}
int main() 
{
	string s; cin>>s;
	xoa(s);
	if(s.size()!=0) cout<<s;
	else cout<<"EMPTY";
	return 0; 
}
