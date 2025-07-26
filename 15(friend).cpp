#include<iostream>
class test
{
    friend void circum(test);
    int r;
    public:void getdata()
    {
        std::cout<<"enter radius";
        std::cin>>r;
    }
    void area()
    {
        float a;
        a=3.14*r*r;
        std::cout<<"area="<<a<<std::endl;
    }
};

void circum(test t)
{
    float c;
    c=2.0*3.14*t.r;
    std::cout<<"Circumference="<<c<<std::endl;
}

int main()
{
    test t1;
    t1.getdata();
    t1.area();
    circum(t1);
}
