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
    string s;
    cin >> s;
    if(s.at(s.size()-1) == 'T'){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}