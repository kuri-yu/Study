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
    ll n,k;
    cin >> n >> k;
    ll num = 1;
    for(ll i=0; i<n; i++){
        if(num*2>num+k){
            num += k;
        }else{
            num *= 2;
        }
    }
    cout << num << endl;
    return 0;
}