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
    ll n,a;
    cin >> n >> a;
    if(n%500 <= a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}