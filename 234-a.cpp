#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll func(ll x){
    return x * (x+2) + 3;
}

int main(){
    ll n;
    cin >>n;
    cout << func(func(func(n) + n) + func(func(n)))<< endl;
}