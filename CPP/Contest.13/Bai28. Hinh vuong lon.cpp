#include<iostream>

using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int n;
int a[100][100]; 

void tong(int i,int j,int &sum) 
{
	for(int k=0;k<8;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		sum+=a[i1][j1]; 
	} 
}
int main() 
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int res=0; 
	for(int i=1;i<n-1;i++){
		for(int j=1;j<n-1;j++){
			int sum=a[i][j];
			tong (i,j,sum);
			res=max(res,sum); 
		} 
	} 
	cout<<res;
	return 0; 
}
