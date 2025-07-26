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
                   for(int k=i+2;k<n;k++)
                   {
                       if(arr[i]+arr[j]+arr[k]==ele)
                        {
                            cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"="<<ele<<endl;
                        }
                   }
               }
           }

        }



