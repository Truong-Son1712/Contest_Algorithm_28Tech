#include<iostream>
#include<vector>
#include<math.h>
 
using namespace std;

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
} 
void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" "; 
}
bool ngto(int n) 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return n>1; 
} 
vector<int> daycon(int a[],int n)
{
	vector<int> v;
	int dodaimax=0, dodaihh=0, summax=0, sumhh=0, k=0;
	for(int i=0;i<n;i++){
		if(ngto(a[i])){
			dodaihh++;
			sumhh+=a[i];
			if(dodaihh>dodaimax||(dodaihh==dodaimax)&&(sumhh>summax)){
				dodaimax=dodaihh;
				summax=sumhh; 
				k=i-dodaihh+1; 
			}
		}
		else{
			dodaihh=0;
			sumhh=0; 
		} 
	}
	for(int i=k;i<k+dodaimax;i++)
		v.push_back(a[i]); 
	return v; 
} 
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	vector<int> luu=daycon(a,n);
	if(luu.size()==0) cout<<"NOT FOUND";
	else{
		cout<<luu.size() <<endl;
		xuat(luu); 
	} 
	return 0; 
} 
