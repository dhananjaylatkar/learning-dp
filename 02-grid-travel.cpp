#include <iostream>
#include <map>
#include <tuple>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll unsigned long
using namespace std;

map<tuple<ll, ll>, ll> memo;

ll grid_travel(ll m, ll n){
    if (memo.find({m, n}) != memo.end()){
        return memo[{m, n}];
    }
    if (m == 1 || n ==1) {
        return 1;
    }
    if (m == 0 || n == 0) {
        return 0;
    }
    memo[{m, n}] = grid_travel(m - 1, n) + grid_travel(m, n - 1);
    return memo[{m, n}];
}
int main(){
    fio;
    cout << grid_travel(2, 3) << '\n';
    cout << grid_travel(18, 18) << '\n';
    return 0;
}
