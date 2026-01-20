#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int nam=n/365;
	int du=n%365;
	int tuan=du/7;
	int ngay=du%7;
	cout<<nam<<" "<<tuan<<" "<<ngay;
	return 0; 
}
