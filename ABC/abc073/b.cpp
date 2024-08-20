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
    ll n,l,r,sum=0;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> l >> r;
        sum += r - l + 1;
    }
    cout << sum << endl;
    return 0;
}