#include <iostream>
#include <unordered_map>
using namespace std;

#pragma region Memoization
//int AddTo80(int n)
//{
//	return n + 80;
//}
//
//unordered_map<int, int> dp;
//
//int memoized(int n)
//{
//	if (dp[n])
//		return dp[n];
//	else
//		dp[n] = n + 80;
//
//	return dp[n];
//}
#pragma endregion

#pragma region  Fibonacci without dynamic programming O(2^N)

int countOfCall = 0;
int fib(int n)
{
	cout << "Loading..." << endl;
	countOfCall++;
	if (n < 2)
		return n;

	return fib(n - 1) + fib(n - 2);
}

#pragma endregion


#pragma region Fibonacci With dynamic programming O(N)

unordered_map<int, int> dp;
int countOfCall1 = 0;
int fipOpt(int n)
{
	countOfCall1++;
	if (dp[n])
		return dp[n];

	if (n < 2)
		return n;

	dp[n] = fipOpt(n - 1) + fipOpt(n - 2);

	return dp[n];
}

#pragma endregion

int main()
{
	//cout << "Fib: " << fib(10) << endl;
	cout << "Fib with DP: " << fipOpt(25) << endl;

	//cout << "Count without DP:" << countOfCall << endl;
	cout << "Count with DP:" << countOfCall1 << endl;
}