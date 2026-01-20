#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

class poin  
{
protected:
	double x,y; 
};
class movablepoint : public poin  
{
private:
	double xspeed, yspeed;
	int lan;
public:
	friend istream& operator >>(istream& in, movablepoint &a){
		cin>>a.x>>a.y>>a.xspeed>>a.yspeed>>a.lan;
		return in; 
	} 
	friend ostream& operator <<(ostream& out, movablepoint &a){
		cout<<"X : "<<fixed<<setprecision(2)<<a.x+a.xspeed*a.lan<<endl;
		cout<<"Y : "<<fixed<<setprecision(2)<<a.y+a.yspeed*a.lan<<endl;
		cout<<"X Speed : "<<fixed<<setprecision(2)<<a.xspeed<<endl;
		cout<<"Y Speed : "<<fixed<<setprecision(2)<<a.yspeed<<endl;
		cout<<"-------------------"<<endl; 
		return out; 
	} 
};
int main() 
{
	int n; cin>>n;
	vector<movablepoint> v; 
	while(n--){
		movablepoint x; cin>>x;
		v.push_back(x); 
	} 
	for(int i=0;i<v.size();i++) cout<<v[i];
	return 0; 
}
