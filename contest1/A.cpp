#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k,min, max;

    cin >> n >> k;

    if(n == k || k == 0){
        min = 0;
    }else{
        min = 1;
    }

    if(k* 2 > n-k ){
        max = n-k;
    }else{
        max = k *2;
    }

    cout << min << " "<< max;

    return 0;
}