#include<iostream>
class calc_square
{
    public:
    calc_square(int);
};
    calc_square::calc_square(int x)
    {
        x=x*x;
        std::cout<<std::endl<<"Number in function="<<x;

    }
int main()
{
    int num=10;
    calc_square f1(num);
    std::cout<<std::endl<<"Number in main="<<num;
    return 0;
}
