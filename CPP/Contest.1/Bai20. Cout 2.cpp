#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	int n; cin>>n;
	cout<<setw(6)<<setfill('0')<<n<<endl<<setw(6)<<setfill('#')<<n; 
	return 0; 
}
