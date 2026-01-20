#include<iostream>
#include<string>
 
using namespace std; 

void dn(string &s)
{
	string t;
	for(int i=0;i<s.size();i++) 
		t+=s[s.size()-1-i] ;
	s=t; 
}

int main() 
{
	int m,s; cin>>m>>s;
	int n9=s/9;
	int du=s-n9*9;
	string n1;
	for(int i=0;i<n9;i++) n1+='9';
	n1+='0'+du;
	for(int i=n9+1;i<m;i++) n1+='0';
	string n2;
	int cong=s-1;
	int n8=(int)cong/9;
	int du2=cong%9;
	for(int i=0;i<n8;i++) n2+='9';
	if(n8<=m-2) {
		n2+='0'+du2;
		for(int i=n8+1;i<m-1;i++) n2+='0'; 
			n2+='1'; 
	}
	else{
		n2+='0'+du2+1; 
	} 
	dn(n2);
	if(m*9<s||(s==0)&&m!=1) cout<<"NOT FOUND"; 
	else if(m==1&&s==0) cout<<0<<endl<<0;
	else cout<<n2<<endl<<n1; 
	
	return 0; 
}
