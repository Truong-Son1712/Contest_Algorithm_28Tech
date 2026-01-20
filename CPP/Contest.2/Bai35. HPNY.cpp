#include<iostream>

using namespace std;

int main() 
{
	int h,m; cin>>h>>m;
	int mn=24*60;
	int mht=h*60+m;
	cout<<mn-mht;
	return 0; 
}
