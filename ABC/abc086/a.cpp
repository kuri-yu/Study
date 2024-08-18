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
    cin >> a >> b;
    if(a*b%2==0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
    return 0;
}