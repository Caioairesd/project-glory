    #include<bits/stdc++.h>
    using namespace std;

    int main (){
        int nFriends =0,totalRed = 0, totalBlue = 0;    

        cin >> nFriends;

        vector<int> redPaint(nFriends);
        vector<int> bluePaint(nFriends);
        
        for (int i = 0; i < nFriends; i++)
        {
            cin >> redPaint[i] >> bluePaint[i];
        }

        totalBlue = accumulate(bluePaint.begin(), bluePaint.end(), 0);
        totalRed = accumulate(redPaint.begin(), redPaint.end(), 0);

        cout << (totalRed + totalBlue) - totalBlue + totalRed << endl;
        
    }