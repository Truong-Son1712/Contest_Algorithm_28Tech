#include<iostream>

using namespace std;

int N, x[100], cot[100], d1[100], d2[100], MAX=0;
int a[100][100];
int sum() 
{
	int tong=0;
	for(int i=1;i<=N;i++){
		tong+=a[i][x[i]]; 
	} 
	return tong; 
}
void Try(int i)
{
	for(int j=1;j<=N;j++){
		if(cot[j]==1&&d1[i-j+N]==1&&d2[i+j-1]==1){
			x[i]=j;
			cot[j]=d1[i-j+N]=d2[i+j-1]=0;
			if(i==N){
				MAX=max(MAX,sum()) ;
			}
			else Try(i+1);
			cot[j]=d1[i-j+N]=d2[i+j-1]=1 ;
		} 
	} 
} 
int main() 
{
	N=8; 
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++) cin>>a[i][j]; 
	for(int i=1;i<=99;i++){
		cot[i]=d1[i]=d2[i]=1; 
	} 
	Try(1);
	cout<<MAX;
	return 0; 
}
