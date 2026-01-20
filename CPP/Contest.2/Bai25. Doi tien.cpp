#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int dong100=n/100;
	int du=n%100;
	int dong20=du/20;
	du%=20;
	int dong10=du/10;
	du%=10;
	int dong5=du/5;
	du%=5;
	int dong1=du;
	cout<<dong100+dong20+dong10+dong5+dong1;
	return 0; 
}
