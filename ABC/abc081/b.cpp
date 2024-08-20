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
    ll a,n,min2=100000;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> a;
        ll num=0;
        while(a%2==0){
            num++;
            a /= 2;
        }
        if(num<min2){
            min2 = num;
        }
    }
    cout << min2 << endl;
    return 0;
}