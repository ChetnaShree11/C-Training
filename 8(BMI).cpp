#include<iostream>
#include<conio.h>
int main()
{
    float H,W,B;
    std::cout<<"Height in meters=";
    std::cin>>H;
    std::cout<<"Weight in kg=";
    std::cin>>W;
    B=W/(H*H);
    std::cout<<"BMI="<<B;
    if ((B>18)&&(B<25))
        std::cout<<"\nYou are healthy";
    else
        std::cout<<"\nYou are unhealthy";
    getch();
}
