#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n; char c;
	int dem=0,sum=0; 
	while(n--) {
		cin>>c;
		if((c>=65&&c<=110)||(c>=97&&c<=122)) dem++;
		else if(c>=48&&c<=57) sum+=c-'0'; 
	}
	cout<<dem<<endl<<sum;
	return 0; 
}
