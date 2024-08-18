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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a+b>c+d){
        cout << "Left" << endl;
    }else if(a+b<c+d){
        cout << "Right" << endl;
    }else{
        cout << "Balanced" << endl;
    }
    return 0;
}