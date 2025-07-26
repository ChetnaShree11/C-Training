#include<iostream>
class distance
{
    int length;
    public:
    distance(int);
    void operator =(distance);
};

distance::distance(int a)
{
    length=a;
}
void distance::operator =(distance d)
{
    if(length==d.length)
    {
        std::cout<<length<<"is equal to"<<d.length;
    }
    else
    {
        std::cout<<length<<"is not equal to"<<d.length;
    }
}
int main()
{
    distance d1(20);
    distance d2(21);
    d1=d2;
    return 0;
}
