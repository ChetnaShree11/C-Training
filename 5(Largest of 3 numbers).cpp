#include<iostream>
#include<conio.h>
int main()
{
    int a,b,c;
    std::cout<<"Enter first number,a";
    std::cin>>a;
    std::cout<<"Enter second number,b";
    std::cin>>b;
    std::cout<<"Enter the third number,c";
    std::cin>>c;
    if (a>b&&a>c)
            std::cout<<"a is the greatest";
    else
        if (b>a&&b>c)
            std::cout<<"b is the greatest";
        else
            if (c>a&&c>b)
                std::cout<<"c is the greatest";
            else
                std::cout<<"error";
    getch();


}
