#include<iostream>
#include<vector>

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void xuat(vector<int>v) 
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" "; 
}
vector<int> daycondainhat(int a[],int n) 
{
	vector<int>v; 
	int daimax=1,daihh=1,summax=a[0],sumhh=a[0],k=0; 
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			daihh++;
			sumhh+=a[i];
			if(daihh>daimax||(daihh==daimax&&sumhh>summax)){
				daimax=daihh;
				summax=sumhh;
				k=i-daihh+1; 
			} 
		}
		else{
			daihh=1;
			sumhh=a[i]; 
		}
	}
	for(int i=k;i<k+daimax;i++) 
		v.push_back(a[i]);
	return v; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n) ;
	vector<int> luu=daycondainhat(a,n) ;
	cout<<luu.size()<<endl; 
	xuat(luu);
	return 0; 
}
