#include<bits/stdc++.h>
        using namespace std;
        double cal_gst(int amt,int gst)
        {
            double tot= amt+((amt*gst)/100);
            return tot;
        }
        int main()
        {
            cout<<cal_gst(1000,18);
        }



