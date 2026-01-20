#include<iostream>

using namespace std;

int n, k;
char c;
int x[100];

void in() 
{
	for(int i=1;i<=k;i++){
		cout<<(char)(x[i]+'A'-1); 
	} 
	cout<<endl; 
}
void Try(int i) 
{
	for(int j=1;j<=n;j++){
		x[i]=j;
		if(i==k){
			in(); 
		} else{
			Try(i+1); 
		} 
	} 
}
int main() 
{
	cin>>c>>k; 
	n=c-'A'+1;
	Try(1); 
	return 0; 
}
