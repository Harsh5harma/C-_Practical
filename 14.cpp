// Created by harsh on 01/03/22.
//Write a program which takes the radius of a circle as input from the user, passes it to another
//function that computes the area and the circumference of the circle and displays the value of area
//and circumference from the main() function.

#include <iostream>
#include <cmath>
void displayAreaAndCircumference(double radius)
{
    double area = M_PI*(radius*radius);
    double circumference = 2*M_PI*radius;

    std::cout<<"The area of a circle of radius: "<<radius<<" is: "<<area<<'\n';
    std::cout<<"The circumference of a circle of radius: "<<radius<<" is: "<<circumference;
}
int main()
{
    double radius{};
    std::cout<<"Enter radius of circle: ";
    std::cin>>radius;
    displayAreaAndCircumference(radius);
    return 0;
}
