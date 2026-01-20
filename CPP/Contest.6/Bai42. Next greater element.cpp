#include<iostream>
#include<vector>

using namespace std;

void nhap(int a[], int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i];	
} 
void xuat(vector<int> a)
{	
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" "; 
} 
vector<int> timkiem(int a[],int n) 
{	
	vector<int> v; 
	for(int i=0;i<n;i++){
		bool check=false; 
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				v.push_back(a[j]) ;
				check=true;
				break; 
			} 
		} 
		if(check==false) v.push_back(-1); 
	}
	return v; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	vector<int> v=timkiem(a,n);
	xuat(v);
	return 0; 
} 
 
