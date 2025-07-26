#include<iostream>
class shape
{
    public:
    int height,width;
    setwidth(int w)
    {
        width=w;
    }
    setheight(int h)
    {
        height=h;
    }

};

class paint_cost:public shape
{
public:
    int getcost(int area)
    {
        return area*90;
    }
};

class rectangle:public paint_cost
{
public:
    int area;
    int getdata()
    {
        return width*height;
    }
};

int main()
{
    rectangle rec1;
    int area;
    rec1.setwidth(5);
    rec1.setheight(7);
    area=rec1.getdata();
    std::cout<<"Total area ="<<rec1.getdata()<<std::endl;
    std::cout<<"Total paint cost ="<<rec1.getcost(area)<<std::endl;
}
