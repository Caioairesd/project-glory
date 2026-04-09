#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int soma= 0,soma2= 0, result;
    vector<int> brinA(5);
    vector<int> brinB(4);
 
    for(int i = 0; i <5; i++){
        cin>> brinA[i];
        soma += brinA[i];
    }
 
    for(int i = 0; i <4; i++){
        cin>> brinB[i];
        soma2 += brinB[i];
    }
 
    result = soma - soma2;
    cout << result;
 
 
}