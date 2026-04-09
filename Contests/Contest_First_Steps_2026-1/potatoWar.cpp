#include <bits/stdc++.h>
using namespace std;

int main (){
    int x1 =0,x2= 0,y1=0,y2=0, numberDays = 0;


    cin >> x1 >> y1 >> x2 >>y2;

   if ((x1 >= 0 && x1 <= 1000) && (y1 >= 0 && y1 <= 1000) && (x2 >= 0 && x2 <= 1000) && (y2 >= 0 && y2 <= 1000) )
   {
           
    if(y2 > y1 && x1 < x2)

    {
        cout << "-1";

    }else{
        while (x1 <= x2)
        {
            x1 += y1;
            x2 += y2;
            numberDays += 1;
        }
        cout<< numberDays;

    } 

    }
    }    