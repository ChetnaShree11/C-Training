#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n1,n2,n3;
            cin>>n1>>n2>>n3;
            if(n1>n2&&n1>n3)
            {
                cout<<"First is greatest"<<"\n";
                if(n2==n3)
                    cout<<"n2=n3";
            }
            else if(n2>n1&&n2>n3)
            {
                cout<<"Second is greatest"<<"\n";
                if(n1==n3)
                    cout<<"n1=n3";
            }
            else if(n3>n1&&n3>n2)
            {
                cout<<"Third is greatest"<<"\n";
                if(n1==n2)
                    cout<<"n1=n2";
            }
            else
                cout<<"n1=n2=n3";
        }
