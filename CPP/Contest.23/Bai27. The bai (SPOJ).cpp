#include<iostream>
#include<math.h> 
#include<cstring>
 
using namespace std;

int n, a[100], used[100];

bool check() 
{
	for(int i=2;i<=n;i++) {
		if(abs(a[i]-a[i-1])==1) return false; 
	}
	return true; 
}
void in()
{
	if(check()){
		for(int i=1;i<=n;i++)
			cout<<a[i];
		cout<<endl; 
	}	
} 
void Try(int i) 
{
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
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
int main() 
{
	cin>>n;
	memset(used,0,sizeof(used)); 
	Try(1);
	return 0; 
}
