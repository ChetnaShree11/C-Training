#include <iostream>
class student
{
    int rno;
public:
    void getnumber()
    {
        std::cout<<"Enter Roll no.";
        std::cin>>rno;
    }

    void putnumber()
    {
        std::cout<<"Roll_no:"<<rno<<std::endl;
    }

};

class test: virtual public student
{
public:
    int part1,part2;
    void getmarks()
    {
         std::cout<<"Enter marks"<<std::endl;
         std::cout<<"Part1:";
         std::cin>>part1;
         std::cout<<"Part2:";
         std::cin>>part2;
    }

    void putmarks()
    {
        std::cout<<"Marks obtained in:"<<std::endl;
        std::cout<<"Part1:"<<part1<<std::endl;
        std::cout<<"Part2:"<<part2<<std::endl;
    }
};

class attn: virtual public student
{
public:
    int score;
    void getscore()
    {
        std::cout<<"Enter sports score"<<std::endl;
        std::cin>>score;
    }

    void putscore()
    {
        std::cout<<"Sports score is:"<<score<<std::endl;
    }
};

class result : public test,public attn
{
    int total;
public:
    void display()
    {
        total=part1+part2+score;
        putnumber();
        putmarks();
        putscore();
        std::cout<<"Total score:"<<total<<std::endl;
    }
};

int main()
{
    result obj;
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
}
