//
// Created by harsh on 01/03/22.
//

#include <iostream>
#include <cmath>

class Triangle
{
private:
    double m_a{}, m_b{}, m_c{};
public:
    void getDimensions()
    {
        std::cout<<"Enter first side: ";
        std::cin>>m_a;
        std::cout<<"Enter second side: ";
        std::cin>>m_b;
        std::cout<<"Enter third side: ";
        std::cin>>m_c;
    }

    void showInfo()
    {
        std::cout<<m_a<<" "<<m_b<<" "<<m_c<<'\n';
    }

    double area()
    {
        double s{m_a+m_b+m_c};
        double area = sqrt(s*(s-m_a)*(s-m_b)*(s-m_c));
        return area;
    }

    double area(int a, int b, int c)
    {
        int s{a+b+c};
        double area = sqrt(s*(s-m_a)*(s-m_b)*(s-m_c));
        return area;
    }
    Triangle& operator=(Triangle t)
    {
        m_a = t.m_a;
        m_b = t.m_b;
        m_c = t.m_c;
        return *this;
    }

    bool operator ==(Triangle t)
    {
        if(m_a==t.m_a && m_b==t.m_b && m_c==t.m_c)
            return true;
        else
            return false;
    }
};

int main()
{
    Triangle T1, T2;
    T1.getDimensions();
    T2.getDimensions();
    std::cout<<"The first Triangle is: ";
    T1.showInfo();
    std::cout<<"\nThe second Triangle is: ";
    T2.showInfo();

    std::cout<<"Comparing Triangles after overloading equality operator... \n";
    if (T1==T2)
        std::cout<<"Both triangles are the same. ";
    else
        std::cout<<"Triangles are different. ";

    std::cout<<"\nNow using overloaded assignment operator to assign the first"
               "triangle to second one.\n";
    T1=T2;
    std::cout<<"First Triangle is now: ";
    T1.showInfo();
    std::cout<<"Area of the triangle 1 is now: "<<T1.area();

    return 0;
}