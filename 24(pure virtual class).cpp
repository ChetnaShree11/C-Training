#include<iostream>
class base1
{
public:
    virtual void accept()=0;
    virtual void display()=0;

    ~base1()
    {
        std::cout<<"Destroying base"<<std::endl;
    }
};

class derived1: public base1
{
public:
    void accept()
    {
        std::cout<<"Derived1 class accept method"<<std::endl;
    }

    void display()
    {
        std::cout<<"Derived1 class display method"<<std::endl;
    }

    ~derived1()
    {
        std::cout<<"Destroying derived1"<<std::endl;
    }
};

class derived2: public base1
{
public:
    void accept()
    {
        std::cout<<"Derived2 class accept method"<<std::endl;
    }

    void display()
    {
        std::cout<<"Derived2 class display method"<<std::endl;
    }

    ~derived2()
    {
        std::cout<<"Destroying derived2"<<std::endl;
    }
};

int main()
{
    base1 *Base1 ;
    Base1=new derived1;
    Base1->accept();
    Base1->display();

    delete Base1;
    Base1=new derived2;
    Base1->accept();
    Base1->display();
}
