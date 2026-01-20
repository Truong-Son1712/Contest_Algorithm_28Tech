#include<iostream>
#include<algorithm>
 
using namespace std;

int main()
{
	int a,b,c; cin>>a>>b>>c;
	int nn=min({a,b,c});
	int ln=max({a,b,c});
	int g;
	if(a!=nn&&a!=ln) g=a;
	else if(b!=nn&&b!=ln) g=b;
	else g=c;
	cout<<nn<<" "<<g<<" "<<ln;
	return 0; 
} 
