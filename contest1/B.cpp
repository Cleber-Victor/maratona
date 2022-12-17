#include <bits/stdc++.h>

using namespace std;





int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int val;

   cin >> val;
   char bits [val];
   int num = 0;
   int exp = 1;
   int incremento;

    for(int i =val-1; i >= 0 ; i--){
        cin >> bits[i];
    }

    for(int j =0; j< val ;j++){
        incremento = 0;
        if(bits[j]== 49 ){
            incremento++;
            incremento = incremento * exp;

        }else {
            exp *= 10;
        }
        num += incremento;
    }

    cout << num;


    return 0;
}