#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm> 

using namespace std;

class Circle 
{
protected: 
	double radius;
	string color;
public:
	double getarea(){
		return 3.14*radius*radius;
	} 
};
class Cylinder : public Circle 
{
private: 
	double height;
public:
	friend istream& operator >>(istream& in, Cylinder &x){
		cin>>x.color>>x.radius>>x.height; 
		return in; 
	} 
	double getvolume(){
		return getarea()*height; 
	} 
	friend ostream& operator <<(ostream& out, Cylinder x){
		cout<<"Color : "<<x.color<<endl;
		cout<<"Height : "<<fixed<<setprecision(2)<<x.height<<endl;
		cout<<"Radius : "<<fixed<<setprecision(2)<<x.radius<<endl;
		cout<<"Volume : "<<fixed<<setprecision(2)<<x.getvolume()<<endl;
		cout<<"-------------------"<<endl;
		return out; 
	} 
	friend bool operator <(Cylinder a,Cylinder b){
		if(a.getvolume()!=b.getvolume()) return a.getvolume()>b.getvolume();
		else return a.color<b.color; 
	} 
}; 
int main()
{
	int n; cin>>n;
	vector<Cylinder> v; 
	while(n--){
		Cylinder x; cin>>x; 
		v.push_back(x); 
	} 
	sort(v.begin(),v.end()) ;
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0; 
}
