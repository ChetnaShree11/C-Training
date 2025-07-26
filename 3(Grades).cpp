#include<iostream>
int main()
{
    int a,b,c,d,P;
    std::cout<<"English marks=";
    std::cin>>a;
    std::cout<<"Hindi marks=";
    std::cin>>b;
    std::cout<<"Science marks=";
    std::cin>>c;
    std::cout<<"Maths marks=";
    std::cin>>d;
    P=((a+b+c+d)/4);
    std::cout<<"Percentage="<<P;
    std::cout<<"\nGrage= ";
    if (P>=90)
    std::cout<<"A";
    else
        if (P>=80)
            std::cout<<"B";
        else
            if (P>=70)
                std::cout<<"C";
            else
                if (P>=60)
                    std::cout<<"D";
                else
                    std::cout<<"FAIL";

}
