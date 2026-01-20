#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstring> 
 
using namespace std;

int n, x[10], used[10];
char a[10]; 

void in() 
{
	for(int i=1;i<=n;i++) cout<<a[i];
	for(int i=1;i<=n;i++) cout<<x[i];
	cout<<endl; 
}
void Try(int i) 
{
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			for(int u=1;u<=n;u++){
				a[i]= (char)(j+'A'-1);
				used[j]=1; 
				x[i]=u; 
				if(i==n){
					in(); 
				} 
				else{
					Try(i+1); 
				} 
				used[j]=0; 
			} 
		} 
	} 
}
int main() 
{
	cin>>n;
	memset(used,0,sizeof(used)); 
	Try(1); 
	return 0; 
}
