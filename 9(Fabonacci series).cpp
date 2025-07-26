#include<iostream>
#include<conio.h>
int main()
{   int n,a,b,c;
    std::cout<<"Enter the maximum number";
    std::cin>>n;
    a=0;
    b=1;
    c=a+b;
    std::cout<<c<<",";
    for(int i=1;i<n;i++)
    {std::cout<<c <<",";
     a=b;
     b=c;
     c=a+b;
    }
    return 0;
    getch();
}
