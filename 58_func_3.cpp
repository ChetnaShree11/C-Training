#include<bits/stdc++.h>
        using namespace std;
        void f(int x, int &y)
        {
            x++;
            y=y+x;
        }
        int main()
        {
            int x=2,y=3;
            f(x,y);
            cout<<x<<" "<<y;
        }



