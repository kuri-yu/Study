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
    ll a,b,ans=0;
    cin >> a >> b;
    for(ll i=a; i<b+1; i++){
        if(i%10==i/10000 && i/10%10 == i/1000%10){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}