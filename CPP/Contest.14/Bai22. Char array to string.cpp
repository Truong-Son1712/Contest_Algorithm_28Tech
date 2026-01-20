#include<iostream>
#include<string>

using namespace std;

string array_to_string(char a[], int n)
{
	string s;
	for(int i=0;i<n;i++)
		s+=a[i];
	return s; 
}
int main() 
{
	int n; cin>>n;
	char a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<< array_to_string(a,n);
	return 0; 
}
