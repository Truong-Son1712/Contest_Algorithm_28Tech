#include<iostream>
#include<vector>
#include<math.h> 
#include<algorithm> 

using namespace std;

bool doixung(vector<int> a) 
{
	vector<int> temp(a.begin(),a.end());
	reverse(temp.begin(),temp.end()); 
	if(a==temp) return true;
	else return false; 
} 
bool ngto(int n) 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return n>1; 
} 
void nhap(vector<int> &a,int n)
{ 
	for(int i=0;i<n;i++)
		cin>>a[i]; 
} 
int main() 
{
	int n; cin>>n; 
	vector<int> a(n);
	nhap(a,n);
	int max1=a[0], min1=a[0], index_max=0, index_min=0,sont; 
	long long product; 
	for(int i=0;i<n;i++){
		if(a[i]>max1){
			max1=a[i];
			index_max=i;
		}
		else if(a[i]<=min1){
			min1=a[i];
			index_min=i; 
		} 
		if(ngto(a[i])) sont++; 
		product = (product * a[i]) % (1000000007);
	} 
	vector<int> temp(a.begin(),a.end()) ;
	sort(temp.begin(),temp.end());
	long long max2=temp[n-2], min2=temp[1];
	long long tichlonnhat=max(max1*max2,min1*min2);
	cout<<max1<<" "<<index_max<<endl;
	cout<<min1<<" "<<index_min<<endl;
	cout<<sont<<endl;
	cout<<tichlonnhat<<endl;
	if(doixung(a)) cout<<"YES";
	else cout<<"NO";
	cout<<endl<<product; 
	return 0; 
} 
