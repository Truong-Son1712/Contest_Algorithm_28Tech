#include<iostream>

using namespace std;

int main() 
{
	long long s; cin>>s; 
	long long h=s/3600;
	long long du=s%3600;
	long long p=du/60;
	long long giay=du%60;
	cout<<h<<"h"<<" : "<<p<<"m"<<" : "<<giay<<"s";
	return 0; 
}
