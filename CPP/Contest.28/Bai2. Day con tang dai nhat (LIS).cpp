#include<iostream> 
#include<math.h> 

using namespace std;
 
int main() 
{
	int n; cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	int b[n];
	b[0]=1; 
	for(int i=1;i<n;i++) 
	{
		b[i]=1; 
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				b[i]=max(b[i],b[j]+1);
			} 
		}
	}
	int ln=0; 
	for(int i=0;i<n;i++) ln=max(ln,b[i]);
	cout << ln; 
	return 0; 
}
