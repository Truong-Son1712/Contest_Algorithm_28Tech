#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<int> &a,int n)
{
	for(int i=0;i<n;i++){
		int sum; cin>>sum;
		a.push_back(sum); 
	} 
 } 
void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" "; 
 } 
int main()
{
	vector<int> a;
	int m; cin>>m;
	nhap(a,m);
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int dk; cin>>dk;
		if(dk==1){
			int k,num; cin>>k>>num;
			a.insert(a.begin()+k,num); 
		}
		else if(dk==2){
			int k; cin>>k; 
			a.erase(a.begin()+k); 
		} 
	} 
	if(a.size()!=0)
		xuat(a);
	else cout<<"EMPTY"; 
	
	return 0; 
 } 
