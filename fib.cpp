#include <iostream>
#include <map>

using namespace std;


long long int fib(int n, map<int, long long int>& memo){
    if (memo.count(n)){
        return memo[n];
    }

    if (n <= 2){
        return 1;
    }

    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

int main()
{

    map<int, long long int> memo;

    cout << fib(7, memo) << '\n';
    cout << fib(8, memo) << '\n';
    cout << fib(9, memo) << '\n';
    cout << fib(50, memo) << '\n';
}
