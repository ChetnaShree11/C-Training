#include<iostream>
int main()
{
    int a,b;;
    std::cout<<"Enter first number";
    std::cin>>a;
    std::cout<<"Enter second number";
    std::cin>>b;
    if (a>b)
        std::cout<<"First number is greater";
    else
        if (b>a)
            std::cout<<"Second number is greater";
        else
            std::cout<<"Both are equal";
}
