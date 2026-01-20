#include<iostream>
#include<string> 
#include<iomanip> 

using namespace std;

class thisinh 
{
private:
	string ma,ten;
	double d1,d2,d3;
public: 
	friend istream& operator >>(istream& in,thisinh &x){
		cin>>x.ma; getchar(); getline(cin,x.ten); cin>>x.d1>>x.d2>>x.d3; 
		return in; 
	} 
	friend ostream& operator <<(ostream& out,thisinh x){
		double diem= x.d1+x.d2+x.d3; 
		string kv=x.ma.substr(2,1),tt; 
		if(kv=="1") diem+=0.5;
		else if(kv=="2") diem+=1;
		else if(kv=="3") diem+=2.5;
		if(diem>=24) tt="TRUNG TUYEN";
		else tt="TRUOT"; 
		cout<<x.ma<<" "<<x.ten<<" "<<stoi(kv)<<" "<<diem<<" "<<tt; 
		return out; 
	} 
};
int main() 
{
	thisinh x; cin>>x; cout<<x;
	return 0; 
}
