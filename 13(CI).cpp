#include<iostream>
#include<conio.h>
#include<math.h>
int main()
{
    float n,p,r,t,C;
    std::cout<<"How many times do u want to find compound interest";
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
    std::cout<<"Principle=";
    std::cin>>p;
    std::cout<<"Rate of interest=";
    std::cin>>r;
    std::cout<<"Time period=";
    std::cin>>t;
    C=p*pow((1+r/100),t);
    std::cout<<"Compound interest="<<C;
    }
    return 0;
    getch();

}
