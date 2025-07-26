#include<iostream>
#include<conio.h>
int main()
{
    int a,b,n,r;
    std::cout<<"Enter a number";
    std::cin>>a;
    n=a;
    b=0;
    while(a>0)bh
    {
       r=a%10;
       b=(b*10)+r;
       a=a/10;


    }
    std::cout<<b<<"\n";
    if (n==b)
        std::cout<<"It is a palindrome";
    else
        std::cout<<"It is not a palindrome";
    getch();
}
