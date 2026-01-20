#include<iostream> 
#include<math.h> 
#include<algorithm> 

using namespace std;
 
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	int b[n],c[n]; 
	b[0]=1; 
	for(int i=0;i<n;i++) 
	{
		b[i]=a[i]; 
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				b[i]=max(b[i],b[j]+a[i]);
			} 
		}
	}
	c[n-1]=1;
	for(int i=n-1;i>=0;i--){
		c[i]=a[i];
		for(int j=n-1;j>i;j--){
			if(a[i]>a[j]){
				c[i]=max(c[i],c[j]+a[i]); 
			} 
		} 
	} 
	int F[n];
	for(int i=0;i<n;i++){
		F[i]=b[i]+c[i]-a[i]; 
	} 
	cout<<*max_element(F,F+n); 
	return 0; 
}
