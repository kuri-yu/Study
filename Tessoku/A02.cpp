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

ll sumArray1(const vector<ll>& arr) {
    ll sum = 0;
    for (ll i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

ll sumArray2(const vector<vector<ll> >& a, int num) {
    ll sum = 0;
    for (ll i = 0; i < a[num].size(); ++i) {
        sum += a[num][i];
    }
    return sum;
}

bool isNumberInArray(const vector<ll> arr, ll num) {
    return find(arr.begin(), arr.end(), num) != arr.end();
}

int main(){
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    if(isNumberInArray(a,x)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}