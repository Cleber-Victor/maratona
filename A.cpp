#include<bits/stdc++.h>

using namespace std;






int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,x;
  cin >> n >> x;
  int val;
  set <int> conjunto;
  vector <int> array;

  for(int i =0; i<n; i++){
    cin >> val;
    conjunto.insert(val);
    array.push_back(val);
  }

  int out = -1;
  bool flag = 0;
  int posicao;
  for(int i = 0; i<n; i++){
    int complemento = x - array[i];
    // ideia tirar o elemento array[i] do conjunto se for possível para o set n buscar "ele mesmo"
    conjunto.erase(array[i]);
    
    if(conjunto.count(complemento)){
      flag = 1;
      cout << i+1 << " ";
      out = complemento;
      posicao = i+1;
      goto foraco;

    }
    foraco:

  }
  fora:
  if (!flag){
    cout << "IMPOSSIBLE";
  }
 
  int i = 0;
  while(array[i] != out ){
    i++;
  }if (posicao == i +1){
    cout << "IMPOSSIBLE";
    
  }else{
    cout << i+1 ;
  }
  

}