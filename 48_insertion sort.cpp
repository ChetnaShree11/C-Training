#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int a[5];
            for(int i=0;i<5;i++)
                cin>>a[i];
            for(int i=1;i<5;i++)
            {
                for(int j=i;j>=0;j--)
                    {
                        if(a[j]<a[j-1])
                            swap(a[j],a[j-1]);
                        else
                            break;
                    }
            }
            for(int i=0;i<5;i++)
                cout<<a[i]<<" ";
        }


