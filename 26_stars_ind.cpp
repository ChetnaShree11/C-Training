#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,m,m1;
            cin>>n>>m;
            m1=m;
            while(n>0)
            {
                while(m>0)
                {
                    cout<<"*";
                    m--;
                }
                m=m1;
                cout<<"\n";
                n--;
            }

        }


