#include<iostream> 
#include<set>

using namespace std;

int main() 
{
	int n; cin>>n;
	multiset<int> ms;
	int luu[n];
	for(int i=0;i<n;i++){
		int x; cin>>x;
		ms.insert(x);
		int res=ms.count(x);
		luu[i]=res; 
	} 
	for(int i=0;i<n;i++)
		cout<<luu[i]<<" ";
	return 0; 
}
