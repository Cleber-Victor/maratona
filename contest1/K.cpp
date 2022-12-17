#include <bits/stdc++.h>

using namespace std;





int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    return 0;
    vector<int> lul;
    int N,val;
    cin >> N;
    for(int i =0; i< N ; i++){
        int M;
        cin >> M;
        int cont = M;
        for(int j =0; j< M ;j++){
            cin >> val;
            lul.push_back(val);
            for(int h = 0; h<lul.size();h++){
                if(lul[h] > val){
                    lul.erase(lul.begin()+ h);
                }
            }
        }
    }


}