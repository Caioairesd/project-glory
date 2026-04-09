#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int afc=0, pfc=0;
 
    vector<int> jogo1(2);
    vector<int> jogo2(2);
 
    for (int i =0; i < 2;i++){
 
        cin>>jogo1[i];
    }
    for (int i =0; i < 2;i++){
        cin>>jogo2[i];
    }
    int soma = 0,soma2 = 0;
    soma += jogo1[0] + jogo2[0];
    soma2 += jogo1[1] + jogo2[1];
 
    if (soma> soma2){
        cout<<"A";
    }
    else if (soma< soma2){
        cout<<"P";
    }
    else{
 
        cout<<"D";
    }
 
 
}