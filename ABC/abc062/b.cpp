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
    ll h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(ll i=0; i<h; i++){
        cin >> s[i];
    }
    vector<vector<char> > ans(h+2, vector<char>(w+2, '#'));
    for(ll i=0; i<h; i++){
        for(ll j=0; j<w; j++){
            ans[i+1][j+1] = s[i][j];
        }
    }
    for(ll i=0; i<h+2; i++){
        for(ll j=0; j<w+2; j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}