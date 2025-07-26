#include<bits/stdc++.h>
        using namespace std;
        int c()
        {
            cout<<'c';
        }
        int b()
        {
            c();
            cout<<'b';
        }
        int a()
        {
            cout<<'a';
            b();
            c();
            b();
        }
        int main()
        {
            a();
        }



