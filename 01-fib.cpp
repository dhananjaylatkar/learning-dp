#include <iostream>
#include <map>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll unsigned long
using namespace std;

map<ll, ll> memo;

ll fib(ll n){
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    if (n <= 2) {
        return 1;
    }
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main()
{
    fio
    cout << fib(50) << '\n';
    return 0;
}

