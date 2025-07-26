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

class rectangle:public shape
{
    public:
    int area;
    void getdata()
    {
        area=height*width;
        std::cout<<"Area of rectangle="<<area;
    }
};

int main()
{
    int h,w;
    std::cout<<"Height of rectangle =";
    std::cin>>h;
    std::cout<<"Width of rectangle =";
    std::cin>>w;
    rectangle rec1;
    rec1.setwidth(w);
    rec1.setheight(h);
    rec1.getdata();

}
