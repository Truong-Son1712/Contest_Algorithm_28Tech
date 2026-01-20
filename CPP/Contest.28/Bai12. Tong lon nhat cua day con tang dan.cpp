#include<iostream> 
#include<math.h> 

using namespace std;
 
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	long long b[n];
	b[0]=a[0]; 
	for(int i=1;i<n;i++) 
	{
		b[i]=a[i]; 
		long long ln=0; 
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				ln=max(ln,b[j]); 
			} 
		}
		b[i]+=ln; 
	}
	long long ln=0; 
	for(int i=0;i<n;i++) ln=max(ln,b[i]);
	cout << ln; 
	return 0; 
}
