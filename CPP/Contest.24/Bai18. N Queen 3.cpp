#include<iostream>
#include<cstring> 

using namespace std;

int N, x[100], cot[100], d1[100], d2[100], dem=0;
int a[100][100]; 

void in() 
{
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			if(a[i][j]==1) cout<<'Q'; 
			else cout<<'.';
		}
		cout<<endl; 
	} 
	cout<<endl; 
}
void Try(int i)
{
	for(int j=1;j<=N;j++){
		if(cot[j]==1&&d1[i-j+N]==1&&d2[i+j-1]==1){
			x[i]=j;
			a[i][j]=1; 
			cot[j]=d1[i-j+N]=d2[i+j-1]=0;
			if(i==N){
				in(); 
			}
			else Try(i+1);
			cot[j]=d1[i-j+N]=d2[i+j-1]=1 ;
			a[i][j]=0; 
		} 
	} 
} 
int main() 
{
	cin>>N; 
	memset(a,0,sizeof(a));
	for(int i=1;i<=99;i++){
		cot[i]=d1[i]=d2[i]=1; 
	} 
	Try(1);
	cout<<dem;
	return 0; 
}
