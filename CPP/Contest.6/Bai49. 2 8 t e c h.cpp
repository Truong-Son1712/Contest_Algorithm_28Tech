#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<char> &v)
{
	int n; cin>>n; 
	v.resize(n) ;
	for(int i=0;i<n;i++)
		cin>>v[i]; 
}
bool check(vector<char> v) 
{
	bool check2=false;
	bool check8=false;
	bool checkt=false;
	bool checke=false;
	bool checkc=false;
	bool checkh=false;
	for(int i=0;i<v.size();i+=2){
		if(v[i]=='2') check2=true;
		else if(v[i]=='8'&&check2==true) check8=true;
		else if(v[i]=='t'&&check8==true) checkt=true;
		else if(v[i]=='e'&&checkt==true) checke=true;
		else if(v[i]=='c'&&checke==true) checkc=true;
		else if(v[i]=='h'&&checkc==true) checkh=true;	
	}
	if(check2==true&&check8==true&&checkt==true&&checke==true&&checkc==true&&checkh==true)
		return true;
	else return false; 
} 
int main() 
{
	vector<char> v;
	nhap(v) ;
	if(check(v)) cout<<"28TECH";
	else cout<<"HCET82";
	return 0; 
} 
