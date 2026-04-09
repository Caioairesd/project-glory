#include <bits/stdc++.h>
using namespace std;
 
int main (){
    int w,a,b,c;
 
    cin>> w;
    cin >> a;
    cin >> b;
    cin >> c;
 
    int comida = a + b + c;
 
    if (comida > w){
        cout<< "N";
    }
    else{
        cout << "S";
    }
}
