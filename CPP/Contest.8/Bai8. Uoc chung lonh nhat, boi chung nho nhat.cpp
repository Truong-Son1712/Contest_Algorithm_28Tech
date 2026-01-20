#include<iostream>

using namespace std;

long long gcd(int a, int b) 
{
	if(b==0) return a;
	else return gcd(b,a%b);	
}
int findLCM(int a, int b, int multiple) {
    if (multiple % a == 0 && multiple % b == 0) {
        return multiple;
    }
    return findLCM(a, b, multiple + max(a, b));
}


int lcm(int a, int b) {
    return findLCM(a, b, max(a, b));
}
int main() 
{
	long long a,b; cin>>a>>b; 
	cout<<gcd(a,b)<<" "<<lcm(a,b);
	return 0; 
}
