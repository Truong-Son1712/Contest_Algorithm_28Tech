#include<iostream>

using namespace std;
 
int n, x[100];
bool used[100];

bool check()
{
	for(int i=2;i<=n;i++){
		if(abs(x[i]-x[i-1])==1) return false; 
	} 
	return true; 
}
void Try(int i) 
{
	for(int j=1;j<=n;j++) {
		if(used[j]==false){
			x[i]=j;
			used[j]=true;
			if(i==n){
				if(check()){
					for(int i=1;i<=n;i++) cout<<x[i]; 
					cout<<endl; 
				} 
			} 
			else{
				Try(i+1); 
			} 
			used[j]=false; 
		} 
	}
}
int main() 
{
	cin>>n;
	Try(1);
	return 0; 
}
