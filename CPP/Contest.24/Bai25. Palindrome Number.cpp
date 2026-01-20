#include<iostream>
#include<string>
#include<algorithm> 

using namespace std;

string s;
int n; 
bool tn(string u)
{
	string tmp=u;
	reverse(u.begin(),u.end());
	return tmp==u; 
}
void Try(int i,vector<string> luu)
{
	if(i==n){
		for(auto x: luu){
			cout<<x<<" "; 
		} 
		cout<<endl; 
	} 
	for(int j=i;j<n;j++) {
		string cat=s.substr(i,j-i+1);
		if(tn(cat)){
			luu.push_back(cat);
			Try(j+1,luu);
			luu.pop_back(); 
		} 
	}
}

int main() 
{
	cin>>s; 
	vector <string> luu;
	n=s.size();
	Try(0,luu) ;
	return 0; 
}
