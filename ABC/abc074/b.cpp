#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
#include<map>
#include <cstdlib>
#include<math.h>
#include <cmath>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

int main(){
    ll n, k, x, sum=0;
    cin >> n >> k;
    for(ll i=0; i<n; i++){
        cin >> x;
        sum += 2*min(abs(x), abs(k - x));
    }
    cout << sum << endl;
    return 0;
}