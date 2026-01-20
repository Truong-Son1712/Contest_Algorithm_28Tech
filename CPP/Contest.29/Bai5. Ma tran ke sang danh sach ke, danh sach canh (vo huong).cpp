#include<iostream>
#include<vector> 

using namespace std;

int n; 
int a[1001][1001];
bool check(int i) 
{
	for(int j=1;j<=n;j++){
		if(a[i][j]==1) return true; 
	} 
	return false; 
}
int main() 
{
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j]; 
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(a[i][j]==1) cout<<i<<" "<<j<<endl; 
		} 
	} 
	cout<<endl;
	//vector<int> b[1001];
	for(int i=1;i<=n;i++){
		if(check(i)){
			cout<<i<<" : ";  
			for(int j=1;j<=n;j++){
				if(a[i][j]==1) cout<<j<<" "; 
			} 
			cout<<endl; 
		} 
	} 
	return 0; 
}
