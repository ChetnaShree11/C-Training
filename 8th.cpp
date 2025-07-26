#include<bit s/stdc++.h>
        using namespace std;
        int main()
        {
            int year;
            cin>>year;
            if(year%400==0)
                cout<<"Leap year";
            else if((year%100!=0)&&(year%4==0))
                cout<<"Leap year";
            else
                cout<<"Not a leap year";
        }
//bool isLeapYear=(year%400==0)||((year%100!=0)&&(year%4==0))
