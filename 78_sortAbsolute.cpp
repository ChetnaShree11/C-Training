#include<bits/stdc++.h>
        using namespace std;
        bool compare(int a,int b)
        {
            if(abs(a)<abs(b))
                return true;
            return false;
        }
        int main()
        {
           int n;
           cin>>n;
           int arr[n],ele;
           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }
           sort(arr,arr+n,compare);//Compares on the basis of condition we provided
           for(int i=0;i<n;i++)
           {
               cout<<arr[i]<<" ";
           }

        }



