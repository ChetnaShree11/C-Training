#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n;
            cin>>n;
            bool isOdd=!(n%2==0);
            if(isOdd)
                cout<<"Odd";
            else
                cout<<"Even";
        }
