#include <iostream>
#include <unordered_map>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	cout << "Calculate Fib:" << n << endl;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	cout << fib(10);
}