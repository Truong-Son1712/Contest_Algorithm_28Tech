#include<iostream>

using namespace std;

int main()
{
	int n; cin>>n;
	if(n%2==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n%3==0&&n%5==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n%3==0&&n%7!=0) cout<<"YES"<<endl; 
	else cout<<"NO"<<endl; 
	if(n%3==0||n%7==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n>30&&n<50) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n>=30&&(n%3==0||n%5==0||n%2==0)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	int a=n%10,b=n%100;
	b/=10;
	if((a==2||a==3||a==5||a==7)&&(b==2||b==3||b==5||b==7)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n>100&&n%23==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n<10||n>20) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(n%10==6||n%10==3||n%10==9||n%10==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0; 
}
