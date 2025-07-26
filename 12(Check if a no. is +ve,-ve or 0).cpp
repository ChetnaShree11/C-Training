#include<iostream>
#include<conio.h>
int main()
{
    int n;
    char ch;
    ch='y';
    while(ch=='y')
    {
       std::cout<<"Enter a number";
       std::cin>>n;
       if(n==0)
        std::cout<<"It is zero";
       else
        if(n>0)
            std::cout<<"It is a positive number";
        else
            std::cout<<"It is a negative number";
        std::cout<<"Enter y to check for another number, any other letter to exit";
        std::cin>>ch;

    }
    return 0;
    getch();


}
