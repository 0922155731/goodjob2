// ConsoleApplication25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
*name:    jabir abdallah ismial adam
*class:      secand class
 department:    computer
*//

#include <iostream>
#include <string>
#include<math.h>

using namespace std;

class Shape //this is the orgin class
{
protected:// this is type of class

    int width,        height,   radius; //  this is deinition of the values
    float pi = 3.14; // pi is constant value 
public:
    void set_Width() //widtd function
    {
        cout << "Width = \n"<<endl;// tell the user to be ready to enter width
        cin >> width;//enter the width here
    }

    void set_Height() //height function
    {
       // tell the user to be ready to enter height
        cout << "Height =\n "<<endl;
        cin >> height;
    }

    void set_Radius() //this is readius function
    {
        cout << "Radius = ";
        cin >> radius;
    }

    virtual int area(void) = 0; //pure virtual function

    void printArea(void) // here am using  Polymorphism to found the area and than praint area
    {
        cout << this->area() << endl;
    }

    virtual int circumference(void) = 0; //pure virtual function

    void printCircumference(void) // here am using  Polymorphism to found the area and than praint the cirumference
    {
        cout << this->circumference() << endl;
    }

};

class  Polgon : public Shape // here the new class goodjob Inheritance the frist class shape
{
public:// the type of classs
    int area() //here i determine new function 
    {
        cout << "This is Area =\n "<<endl;
        return (radius * height * width);
    }
    int circumference() //here i determine new function
    {
        cout << "This 's Circumference = ";
        return(width * height);// this is the law 
    }
};

class Triangle : public Polgon //here the new class triangle Inheritance the class doodjob
{
    int area() //area function
    {
        cout << " The Triangle  Area =\n "<<endl;
        return (width * height / 2);// this is the law
    }
    int circumference () // circumference function
    {
        cout << "The Triangle  Circumference = "<<endl;
        return (width + height * 2);
    }
};

class Rectangle : public Polgon //هhere the new class triangle Inheritance the class doodjob
{
{
    int area() //this is retctangle area function
    {
        cout << "The Rectangle  Area =\n " ;
        return (width * height);
    }
    int circumference() //this is retctangle circumference function
    {
        cout << "The Rectangle Circumference =\n ";
        return (2 * (height * width));
    }
};

class Square : public Polgon //here the new class square Inheritance the class doodjob
{
{
    int area() //this is square area function
    {
        cout << "  The Square Area =\n ";
        return (height * height);
    }
    int circumference() //this is Circumference  function
    {
        cout << "The Square Circumference =\n ";
        return (4 * height);
    }
};

class Ellipse : public Shape //here the new class  ellipse Inheritance the class shape
{
public:
    int area() //this is ellipe area function
    {
        cout << "  The Ellipse's Area =  " <<endl;
        return (pi * width * height);
    }
    int   circumference() //this is ellipse Circumference function
    {
        cout << "The Ellipse's Circumference = " <<endl;
        return    (pi * (radius * radius));
    }
};
class Circle : public Ellipse //here the new class circle Inheritance the class eillipse
{
public:
    int area() //this circle area function
    {
        cout << "The Circle's Area = " <<endl;
        return (pi  * (radius * radius));
    }
    int circumference() //this is circle cricumference  function
    {

        cout << "The Circle's Circumference = " <<endl;
        return (pi * 2 * radius);
    }
};
int main() //
{

  Polgon  polgon; Triangle triangle; Rectangle rectangle; Square square; Ellipse ellipse; Circle circle;// here i determain the objects
    Shape* pointer1 = &polgon;   //here i connect between the frist pointer and object goodjob 
    Shape* pointer2 = &ellipse;     //here i connect between the second pointer and object ellipse
   Polgon* pointer3 = &triangle;  //here i connect between the third pointer and object triangle
    Polgon* pointer4 = &rectangle; //here i connect between the fourth pointer and object rectangle
    Polgon* pointer5 = &square;    //here i connect between the fifth pointer and object  square
    Ellipse* pointer6 = &circle;    //here i connect between the sixth  pointer and object circle

    cout << "hi whatsapp use this program to get the area an cricumferece of your shape ";// here  this code tell the user to enter the widthand heightand radius

    cout << "Enter The Value of polgon  Width , Height and Radius:\n" <<endl ; 
    pointer1->set_Height();
    pointer1->set_Radius();
    pointer1->printArea();
    pointer1->printCircumference();

    cout << "Enter The Value of Ellipse's Width , Height and Radius:" <<endl; //اhere  this code tell the user to enter the width and height and radius
    pointer2->set_Width();
    pointer2->set_Height();
    pointer2->set_Radius();
    pointer2->printArea();
    pointer2->printCircumference();

    cout << "if you want to know the area and circumference  of the trinagle follow  instruction " << endl;
    cout << "Enter The Value of Triangle's Width and Height:"<<endl; //اhere  this code tell the user to enter the width and height
    pointer3->set_Width();
    pointer3->set_Height();
    pointer3->printArea();
    pointer3->printCircumference();


    cout << "if you want to know the area and circumference  of the rectangle follow  instruction " << endl;
    cout << "Enter The Value of Rectangle's Width and Height:"<<endl; //here  this code tell the user to enter the width and height 
    //to get the area and the circumerence
    pointer4->set_Width();
    pointer4->set_Height();
    pointer4->printArea();
    pointer4->printCircumference();

    cout <<" Enter The Value of Square's Height:"<<endl; //here  this code tell the user to enter the width and height 
     //to get the area and the circumerence
    pointer5->set_Height();
    pointer5->printArea();
    pointer5->printCircumference();

    cout << "Enter The Value of Circle's Radius:"<<endl; //here  this code tell the user to enter the width and height 
     //to get the area and the circumerence

    pointer6->set_Radius();
    pointer6->printArea();
    pointer6->printCircumference();

   
    // this will show you the rseult of polgon
    cout << "polgon :";
    pointer1->printArea();
    pointer1->printCircumference();

    //this will show you the rseult of ellipes
    cout << "ELLIPSE :"<<endl;
    pointer2->printArea();
    pointer2->printCircumference();

    // this will show you the rseult of trtangle
    cout << "TRIANGLE :" <<endl;
    pointer3->printArea();
    pointer3->printCircumference();

    // this will show you the rseult of  rectangle
    cout << "RECTANGLE :"  <<endl;
    pointer4->printArea();
    pointer4->printCircumference();

    // this will show you the rseult of square
    cout << " SQUARE :" <<endl ;
    pointer5->printArea();
    pointer5->printCircumference();

    // this will show you the rseult of circle
    cout << " CIRCLE :" <<endl ;
    pointer6->printArea();
    pointer6->printCircumference();

    cout << "thanks for using this progarm i hope you are cool after using my progarm \n " <<
        "this is me mr jabir abdallah thanks god blessed you" << endl;



