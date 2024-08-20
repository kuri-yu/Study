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
    string c;
    cin >> c;
    if(c=="a" || c=="i" || c=="u" || c=="e" || c=="o"){
        cout << "vowel" << endl;
    }else{
        cout << "consonant" << endl;
    }
    return 0;
}