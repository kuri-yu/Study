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
        cin >> s.at(i);
    }
    int dx[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; x++) {
            ll num=0;
            if(s[y][x] == '.'){
                for (int k = 0; k < 9; ++k) {
                    int i = x + dx[k];
                    int j = y + dy[k];
                    if (i >= 0 && i < w && j >= 0 && j < h) {
                        if(s[j][i] == '#'){
                            num += 1;
                        }
                    }
                }
                s[y][x] = char('0' + num);
            }
        }
    }

    for(ll i=0; i<h; i++){
        cout << s[i] << endl;
    }
    return 0;
}