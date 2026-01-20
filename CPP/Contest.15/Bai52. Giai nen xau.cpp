#include<iostream>
#include<string>
#include<sstream>
#include<vector> 

using namespace std;

int main() 
{
	string s; cin>>s;
	string temp1=s, temp2=s; 
	for(int i=0;i<temp1.size();i++)
		if(isalpha(temp1[i])) temp1[i]=' ';
	for(int i=0;i<temp2.size();i++)
		if(isdigit(temp2[i])) temp2[i]=' '; 
	string world;
	stringstream ss1(temp1),ss2(temp2); 
	vector<int>v1;
	vector<string>v2; 
	while(ss1>>world){
		v1.push_back(stoi(world)); 
	} 
	while(ss2>>world){
		v2.push_back(world); 
	} 
	//for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";
	//cout<<endl;
	//for(int i=0;i<v2.size();i++) cout<<v2[i]<<" ";
	//cout<<endl; 
	for(int i=0;i<v2.size();i++){
		for(int j=0;j<v1[i];j++)
			cout<<v2[i]; 
	} 
	return 0; 
}
