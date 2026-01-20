#include<iostream> 
#include<algorithm>
#include<math.h>
#include<vector> 
 
using namespace std;

void nhap(vector<int> &a) 
{
	int n; cin>>n;
	a.resize(n); 
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
long long tong(vector<int>a) 
{
	int n=a.size(); 
	long long num1 = 0, num2 = 0;
	if(n%2==0) {
    	for (int i = 0; i < n; i+=2) {
        	num1 = num1 * 10 + a[i];
        	num2 = num2 * 10 + a[i+1];
        }
    }
    if(n%2!=0) {
    	for (int i = 0; i < n; i+=2) {
        	num1 = num1 * 10 + a[i];
        	num2 = num2 * 10 + a[i+1];
         	if(i==n-1) num2=num2/10;
        }
    }
    return num1+num2; 
}
void sapxep(vector<int>&v)
{
	vector<pair<int,int> >luu; 
	sort(v.begin(),v.end()); 
	int dem[9]={0};
	for(int i=0;i<v.size();i++)
		dem[v[i]]++;
	for(int i=0;i<v.size();i++)
		luu.push_back(make_pair(v[i],dem[v[i]])) ;
	if(v[0]==0){
		for(int i=0;i<v.size();i++){
			if(v[i]==0){
				v.erase(v.begin()+i); 
				i--;
			}
		}
		for(int i=0;i<luu[0].second;i++)
			v.insert(v.begin()+2,0);
	}
} 
int main() 
{
	vector<int>a; 
	nhap(a);
	sapxep(a); 
	
	cout<<tong(a);
	return 0; 
}
