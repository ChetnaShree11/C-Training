#include<iostream>

class student
{
public:
student()
{
    std::cout<<"object created";

}
studen(float a)
{
    if(a>=18)
    {
        std::cout<<"valid"<<std::endl;

    }
    else
    {
        std::cout<<"invalid"<<std::endl;
    }
}
student(int a)
{
    if(a%2==0)
    {
        std::cout<<"even number"<<std::endl;
    }
    else
    {
        std::cout<<"odd number"<<std::endl;
    }
}
};
int main()
{
    student s(2);
    student s1(2.2);
    student s2();

}



