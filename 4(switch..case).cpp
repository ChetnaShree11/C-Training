#include<iostream>
int main()
{
    int Bp,H,Np;
    char C;
    std::cout<<"Basic pay=";
    std::cin>>Bp;
    std::cout<<"Class=";
    std::cin>>C;
    switch(C)
    {
    case'A':
    case'a':
    H=(40.0/100)*Bp;
    std::cout<<"HRA="<<H;
    break;
    case'B':
    case'b':
    H=(30.0/100)*Bp;
    std::cout<<"HRA="<<H;
    break;
    case'C':
    case'c':
    H=(20.0/100)*Bp;
    std::cout<<"HRA="<<H;
    break;
    default:
    std::cout<<"Invalid choice";
    }
    Np=Bp+H;
    std::cout<<"\nNet pay="<<Np;



}
