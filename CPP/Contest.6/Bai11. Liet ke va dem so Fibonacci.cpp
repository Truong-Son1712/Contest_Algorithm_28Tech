#include <iostream>
#include<math.h> 
using namespace std; 

bool isFibonacci(long long n) {
    if (n == 0 || n == 1) {
        return true;
    }

    long long  fib1 = 0, fib2 = 1, fibSum;
    while (fib2 < n) {
        fibSum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibSum;
    }
    return fib2 == n;
}
void nhap(long long a[], long long n)
{
	for(long long i=0;i<n;i++)
		cin>>a[i]; 
 } 
void lietke(long long  a[], long long n) 
{
	for(long long i=0;i<n;i++)
		if(isFibonacci(a[i])) cout<<a[i]<<" "; 
}

int main()
{
	long long n; cin>>n; long long a[n];
	nhap(a,n); 
	lietke(a,n);
	return 0; 
}
