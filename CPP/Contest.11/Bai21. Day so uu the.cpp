#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int>a) 
{
	int n=a.size();
	int chan=0, le=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) chan++;
		else le++;
	}
	if((chan>le&&n%2==0)||(le>chan&&n%2!=0))
		return true;
	else return false; 
}
int main() 
{
	vector<int> a;
	int num;
	while(cin>>num){
		a.push_back(num); 
	} 
	if(check(a))cout<<"YES";
	else cout<<"NO";
	return 0; 
}
