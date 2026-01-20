#include<iostream>

using namespace std;

int main() 
{
	int a,b,c,n; cin>>a>>b>>c>>n;
	int sum=a+b+c+n;
	if(sum%3==0){
		int chia=sum/3;
		if(a>chia||b>chia||c>chia) cout<<"NO";
		else cout<<"YES"; 
	}else{
		cout<<"NO"; 
	} 
	return 0; 
}
