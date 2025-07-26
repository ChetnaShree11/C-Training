#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int arr[5],ele;
           for(int i=0;i<5;i++)
           {
               cin>>arr[i];
           }
           cout<<"Element= ";
           cin>>ele;
           int i;
           for(i=0;i<5;i++)
           {
               if(ele==arr[i])
                   break;
           }
           if(i<5)
            cout<<"element found at "<<i<<" index";
           else
            cout<<"Element not found";

        }



