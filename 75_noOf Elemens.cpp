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
           int i,j;
           for(i=0;i<5;i++)
           {
               if(ele==arr[i])
                   break;
           }
           for(j=5-1;j>=0;j--)
           {
               if(ele==arr[j])
                break;
           }
           if(i<5&&j>=0)
            cout<<"element found at "<<i<<" index"<<"and"<<j;
           else
            cout<<"Element not found";

        }



