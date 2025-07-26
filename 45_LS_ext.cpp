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
           int i,count=0;
           for(i=0;i<5;i++)
           {
               if(ele==arr[i])
                  count++;
           }
           cout<<"Frequency= "<<count;

        }



