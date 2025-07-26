#include<iostream>
#include<conio.h>
#include<math.h>
int main()
{
    int i,a,b,c,s,area;
    while(i<=10)
    {
        std::cout<<"Sides of scalene triangle=";
        std::cin>>a>>b>>c;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        std::cout<<"Area of the triangle="<<area;
        i++;

    }
    return 0;
    getch();

}
