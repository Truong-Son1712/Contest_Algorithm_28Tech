#include<iostream>
#include<vector>
#include<cctype> 

using namespace std;

vector<char> nhap()
{
	vector<char> v; 
	char c;
	while(cin>>c){
		v.push_back(c);
		if (cin.get() == '\n') break; 
	} 
	return v; 
}
vector<char> thaydoi(vector<char> v)
{
	for(int i=0;i<v.size();i++){
		if(isupper(v[i])) v[i]=tolower(v[i]); 
		else if(islower(v[i])) v[i]=toupper(v[i]); 
		}
	return v;	
 } 
 void xuat(vector<char> v)
 {
 	for(int i=0;i<v.size();i++)
	 	cout<<v[i]<<" "; 
  } 
int main()
{
	vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    xuat(res);
    return 0;
 } 
