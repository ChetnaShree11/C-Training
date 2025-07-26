#include<iostream>
#include<conio.h>
int main()
{
    int T,F;
    std::cout<<"Enter the temperature in celsius";
    std::cin>>T;
    F=(T*(9.0/5))+32.0;
    std::cout<<"Temperature in fahrenheit="<<F;
    getch();

}
