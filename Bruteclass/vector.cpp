#include <bits/stdc++.h>

using namespace std;    

int main() {
 

    vector<int> vec(4);

    for (int i = 0 ; i < 4; i++)    {
    cin >> vec[i];
    
    }
     for (int i = 0 ; i < 4; i++)    {
     vec[i]+=i;

     
     
    }   
    vec.emplace_back(6);
    for (int i = 0 ; i < vec.size(); i++)    {
        cout << vec[i] << " ";
        
    }

cout << endl;

}
