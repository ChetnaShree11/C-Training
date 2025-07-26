#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int arr[5],max=0,max1=0;
            for(int i=0;i<5;i++)
                cin>>arr[i];

            for(int i=0;i<5;i++)
            {
                if(arr[i]>max)
                {
                    max1=max;
                    max=arr[i];
                }
            }
            cout<<max<<"\n"<<max1;
        }


