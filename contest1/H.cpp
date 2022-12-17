#include <bits/stdc++.h>

using namespace std;

struct cd{
    int val;
    int pos;
};


bool in_list( int val, int beg, int end, vector<cd>& list){

    if(beg == end && list[beg].val != val){
        return false;
    }
    int mid = (beg + end)/2;
    if (val == list[mid].val){
        return true;
    }else if (val > list[mid].val){
        return in_list( val,mid+1,end, list );
    }else if ( val < list[mid].val){
        return in_list( val,beg,mid-1, list );
    }else{
        return false;
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,espaco;
    espaco = 0;
    while(a!= 0 && b != 0){
        cin >> a >> b;
        if (a == 0 && b ==0){
            break;
        }
        if(espaco!= 0){
            cout << endl;
        }
        espaco++;
        int cont = 0;

        vector < cd > jack;
        vector < cd > jill;
        int val;
        for (int i =0; i< a; i++ ){
            cd a;
            cin >> a.val;
            a.pos = i;
            jack.push_back(a);
        }

        for(int j=0; j < b; j++){
            
            cd b;
            cin >> b.val;
            b.pos = j;
            jill.push_back(b);
            if(in_list(val,0,a-1,jack)){
                cont++;
                jill.pop_back();
                jack.erase(jack.begin() + )
            }
        }
        cout << cont;

    }


    return 0;
}

