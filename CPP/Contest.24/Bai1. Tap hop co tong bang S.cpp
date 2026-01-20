#include<iostream>
#include<numeric> 

using namespace std;

int n, x[100], k, dem=0,s; 
void Try(int i) 
{
	for(int j=x[i-1]+1;j<=n-k+i;j++) 
	{
		x[i]=j;
		if(i==k){
			int sum=accumulate(x+1,x+k+1,0);
			if(sum==s)	dem++; 
		}else{
			Try(i+1); 
		} 
	}
}
int main() 
{
	cin>>n>>k>>s;
	Try(1);
	cout<<dem;
	return 0; 
}
