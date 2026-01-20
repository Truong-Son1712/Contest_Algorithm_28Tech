#include<iostream>
#include<vector>
#include<algorithm> 
#include<math.h> 

using namespace std;

int main() 
{
	string s; cin>>s;
	vector<int> v;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'){
			int dem=0;
			while(s[i]=='1'){
				dem++;
				i++; 
			} 
			i--; 
			v.push_back(dem); 
		} 
	} 
	sort(v.begin(),v.end());
	int res=0;
	int sum1=0,sum2=0;
	for(int i=0;i<v.size();i++){
		if(i%2==0) sum1+=v[i];
		else sum2+=v[i]; 
	} 
	cout<<max(sum1,sum2);
	return 0; 
}
