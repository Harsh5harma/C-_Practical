// Created by harsh on 01/03/22.
//c) Increment, Overload ++ operator (both prefix & postfix)
//d) Decrement, Overload -- operator (both prefix & postfix)
//e) Overload operator == (to check equality of two boxes), as a friend function
//f) Overload Assignment operator
//g) Check if it is a Cube or cuboid
//Write a program which takes input from the user for length, breath and height to test the above
//class.

#include <iostream>

class Box
{
private:
    double m_length{}, m_breadth{}, m_height{};
public:

    Box(double l,double b,double h):m_length(l),m_breadth(b),m_height(h){};
    void printDetails()
    {
        std::cout<<"Length: "<<m_length;
        std::cout<<"\nBreadth: "<<m_breadth;
        std::cout<<"\nHeight: "<<m_height;
    }
    double surfaceArea()
    {
        return 2*(m_breadth*m_height+m_breadth*m_length+m_length*m_height);
    }

    double volume()
    {
        return (m_height*m_breadth*m_length);
    }

    Box& operator ++()
    {
        m_length++;
        m_breadth++;
        m_height++;
        return *this;
    }

    Box operator++(int)
    {
        Box T=*this;
        m_height++;
        m_breadth++;
        m_length++;
        return T;
    }

    Box& operator --()
    {
        m_length--;
        m_breadth--;
        m_height--;
        return *this;
    }

    Box operator--(int)
    {
        Box T=*this;
        m_height--;
        m_breadth--;
        m_length--;
        return T;
    }

    friend bool operator==(Box& b1, Box& b2)
    {
        if (b1.m_length==b2.m_length && b1.m_breadth==b2.m_breadth && b1.m_height==b2.m_height)
            return true;
        else
            return false;
    }

    Box operator=(Box& box)
    {
        m_height=box.m_height;
        m_breadth=box.m_breadth;
        m_length=box.m_length;
        return *this;
    }

    void iswhat() {
        if (m_length == m_breadth && m_breadth == m_height) {
            std::cout << "Box is a cube.\n";
        } else
            std::cout << "Box is a cuboid.\n";
    }
};

int main()
{
    Box b1{8,7,6}, b2{6,6,6};
    b1.printDetails();
    std::cout<<"\nSurface Area is: "<<b1.surfaceArea();
    std::cout<<"\nVolume of the box is: "<<b1.volume();
    std::cout<<"\nChecking if the box is a cube or a cuboid:.. \n";
    b1.iswhat();
    std::cout<<"\nIncrementing the parameters: \n";
    b1++;
    b1.printDetails();
    std::cout<<"\nDecrementing the parameters: \n";
    b1--;
    b1.printDetails();
    std::cout<<"\nAssigning values of box to new one: \n";
    b2=b1;
    b2.printDetails();

    std::cout<<"\nChecking if 2 boxes are equal.\n";

    if (b1==b2)
        std::cout<<"Boxes are equal. ";
    else
        std::cout<<"Boxes aren't equal. ";
    return 0;

}