#include<iostream>
class calculate_square
{
    public:
    void square(int &);
};

void calculate_square::square(int & num)
{
    num*=num;
    std::cout<<"Number in function="<<num<<std::endl;
}

int main()
{
    calculate_square f1;
    int n=10;
    f1.square(n);
    std::cout<<"Number in main is="<<n<<std::endl;
    return 0;
}
