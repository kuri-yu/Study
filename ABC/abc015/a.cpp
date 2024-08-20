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
    string a,b;
    cin >> a >> b;
    if(a.size() > b.size()){
        cout << a << endl;
    }else{
        cout << b << endl;
    }
    return 0;
}