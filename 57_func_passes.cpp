#include<bits/stdc++.h>
        using namespace std;
        void f(int &x)
        {
            x++;
        }
        void g(int x)
        {
            x++;
        }
        int main()
        {
            int x=5;
            f(x);
            cout<<x<<endl;
            g(x);
            cout<<x;
        }



