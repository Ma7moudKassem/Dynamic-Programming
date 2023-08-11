#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, long long> memo;

long long mimoFib(int n)
{
	if (n <= 1)
		return n;

	cout << "Calculate Fib:" << n << endl;

	if (!memo[n])
		memo[n] = mimoFib(n - 1) + mimoFib(n - 2);

	return memo[n];
}
int main()
{
	cout << mimoFib(10);
}