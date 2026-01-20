#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<int> &a,int n) 
{
	for(int i=0;i<n;i++){
		int num; cin>>num;
		a.push_back(num); 
	} 
}
int main()
{
	vector<int> a;
	int n; cin>>n;
	nhap(a,n);
	int L,R; cin>>L>>R; 
	for(vector<int>::iterator it=a.begin()+L;it!=a.begin()+R+1;++it)
		cout<<*it<<" ";
	cout<<endl; 
	for(vector<int>::iterator it=a.begin()+R;it!=a.begin()+L-1;--it)
		cout<<*it<<" ";
	return 0; 
 } 
