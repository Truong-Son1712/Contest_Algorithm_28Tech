#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

void nhap(vector<int> &a)
{
	int n; cin>>n;
	a.resize(n); 
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 void vitrinhonhat(vector<int>a)
 {
 	int min=*min_element(a.begin(),a.end()) ;
 	for(int i=0;i<a.size();i++)
	 	if(a[i]==min) cout<<i<<" "; 
  } 
   void vitrilonnhat(vector<int>a)
 {
 	int max=*max_element(a.begin(),a.end()) ;
 	for(int i=a.size()-1;i>=0;i--)
	 	if(a[i]==max) cout<<i<<" "; 
  } 
  int main()
  {
  	vector<int> a;
	nhap(a);
	int max=*max_element(a.begin(),a.end()) ;
	int min=*min_element(a.begin(),a.end()) ;
	cout<<min<<endl;
	vitrinhonhat(a);
	cout<<endl;
	cout<<max<<endl;
	vitrilonnhat(a);
	return 0; 
   } 
