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
    ll a,b;
    string op;
    cin >> a >> op >> b;
    if(op == "+"){
        cout << a + b << endl;
    }else{
        cout << a - b << endl;
    }
    return 0;
}