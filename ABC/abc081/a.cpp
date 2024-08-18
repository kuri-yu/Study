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

int main() {
    ll s;
    cin >> s;
    cout << (s/100) + (s%10) + (s%100)/10 << endl;
}