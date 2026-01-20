#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n][n];
	int d=1;
	for(int b=0;b<(n+1)/2;b++){
		for(int j=b;j<n-b;j++) a[b][j]=d++;
		for(int i=b+1;i<n-b;i++) a[i][n-1-b]=d++;
		for(int j=n-2-b;j>=b;j--) a[n-1-b][j]=d++;
		for(int i=n-2-b;i>b;i--) a[i][b]=d++; 
	} 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl; 
	}
	return 0; 
}
