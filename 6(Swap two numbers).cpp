#include<iostream>
#include<conio.h>
int main()
{
    int a,b,x;
    std::cout<<"First number,a=";
    std::cin>>a;
    std::cout<<"Second number,b=";
    std::cin>>b;
    std::cout<<"\nValues before swaping:\n a="<<a<<"\n b="<<b;
    x=a;
    a=b;
    b=x;
    std::cout<<"Values after swaping:\n a="<<a<<"\n b="<<b;
    getch();

}
