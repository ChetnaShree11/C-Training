#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int n1,n2,n3;
            cin>>n1>>n2>>n3;
            if(n1>n2&&n1>n3)
                cout<<"First is greatest";
            else
            {   if(n2>n3)
                    cout<<"Second is greatest";
                else
                    cout<<"Third is greatest";
            }
        }

