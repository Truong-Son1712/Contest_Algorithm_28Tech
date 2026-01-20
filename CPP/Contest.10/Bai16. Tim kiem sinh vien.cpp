#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() 
{
	int n; cin>>n;
	cin.ignore(1);
	map<string,string> mp; 
	while(n--) {
		string ms; cin>>ms;
		cin.ignore(1); 
		string ten; getline(cin,ten);
		mp.insert({ms,ten}); 
	}
	int Q; cin>>Q;
	while(Q--){
		string ms; cin>>ms;
		if(mp.count(ms)) cout<<mp[ms]<<endl;
		else cout<<"NOT FOUND" <<endl; 
	} 
	return 0; 
}
