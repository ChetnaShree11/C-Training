#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n,n1,i=1,h=1,lcm;
            cin>>n>>n1;
            while((i<=n)&&(i<=n1))
            {
                if((n%i==0)&&(n1%i==0))
                    h=i;
                i++;
            }
            cout<<h<<endl;
            lcm=(n*n1)/h;
            cout<<lcm;

        }


