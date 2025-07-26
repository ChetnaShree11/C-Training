#include<bits/stdc++.h>
        using namespace std;
        int main()
        {
           int n;
           cin>>n;
           int arr[n];
           for(int i=0;i<5;i++)
           {
               cin>>arr[i];
           }
           int ele;
           cout<<"Sum= ";
           cin>>ele;
           for(int i=0;i<n;i++)
           {
               for(int j=i+1;j<n;j++)//POV
               {
                   if(arr[i]+arr[j]==ele)
                   {
                       cout<<arr[i]<<"+"<<arr[j]<<"="<<ele<<endl;
                   }
               }
           }

        }



