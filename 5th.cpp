#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n1,n2;
            char op;
            cin>>n1>>n2;
            cin>>op;
            if(op=='+')
                cout<<n1+n2;
            else if(op=='-')
                cout<<n1-n2;
            else if(op=='*')
                cout<<n1*n2;
            else if(op=='/')
                cout<<n1/n2;
        }
