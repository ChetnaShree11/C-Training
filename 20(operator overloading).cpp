#include<iostream>
class distance
{
    int length;
    public:
        distance(int a)
        {
            length=a;
        }
        void operator +(int x)
        {
          length=x;
        }
        void display()
        {
            std::cout<<length<<std::endl;
        }
};

int main()
{
    distance d1(10);
    d1.display();
    d1+15;
    d1.display();
}
