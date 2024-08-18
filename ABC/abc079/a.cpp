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
    ll n;
    cin >> n;
    if(n/1000 == (n/100)%10 && (n/100)%10 == (n/10)%10){
        cout << "Yes" << endl;
    }else if((n/100)%10 == (n/10)%10 && (n/10)%10 == n%10){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}