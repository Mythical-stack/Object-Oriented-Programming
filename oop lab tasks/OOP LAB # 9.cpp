/*Q1. ​ The class circleType provides the basic properties of a circle. (Add the function print to this
class to output the radius, area, and circumference of a circle.) Now every cylinder has a base
and height, where the base is a circle. Design a class ​ cylinderType that can capture the
properties of a cylinder and perform the usual operations on the cylinder. Derive this class from
the class circleType. Some of the operations that can be performed on a cylinder are as follows:
calculate and print the volume, calculate and print the surface area, set the height, set the
radius of the base, and set the center of the base. Also, write a program to test various
operations on a cylinder.*/

/*#include<iostream>
#include<string>
using namespace std;
class circleType
{
private:
    double radius;
public:
    circleType(double r=0)
    {
        setRadius(r);
    }
    void setRadius(double r)
    {
        if (r >= 0)
        radius = r;
        else
        radius = 0;
    }
    double getRadius()
    {
        return radius;
    }

    double area()
    {
        return (3.1416 * radius * radius);
    }
    double circumference()
    {
        return (2 * 3.1416 * radius);
    }
    void print()
    {
        cout<<"Radius of Circle is = "<<getRadius()<<"m"<<endl;
        cout<<"Area of Circle is = "<<area()<<endl;
        cout<<"Circumference of Circle is = "<<circumference()<<endl;
    }

};


class cylinderType:public circleType
{
	private:
		double height;
		double cx;
		double cy;
	public:
	    cylinderType()
	    {
	        circleType();
            setheight(0);
            setcentre();
	    }
void setheight(double h)
	{
		if(h>0)
		height=h;
		else
		height=0;
	}
	double getheight()
	{
	    return height;
	}
void setcentre(double cx1=0.0,double cy1=0.0)
	{
		cx=cx1;
	 	cy=cy1;
	}
void volume()
{
	cout<<"Volume of cylinder = "<<(area()*getheight())<<endl;
}
void surfaceArea()
{
	cout<<"Surface Area of Cylinder = "<<((2*3.1416*getRadius()*getheight())+(2*area()))<<endl;
}
void centre()
{
    cout<<"The Center of the Base(Circle) is at ("<<cx<<","<<cy<<")\n";
}
};
int main()
{    double r,h,c1,c2;
	cylinderType C;
	cout<<"Enter the Radius of Base \n";
	cin>>r;
	C.setRadius(r);
	cout<<"Enter the Height of Cylinder \n";
	cin>>h;
	C.setheight(h);
	cout<<"Enter the X and Y points of the Center of the Circle \n";
	cin>>c1>>c2;
	C.setcentre(c1,c2);
	C.print();
	C.volume();
	C.surfaceArea();
	C.centre();
	return 0;
}*/

/*task no 2:

#include<iostream>
#include<string>
using namespace std;
class circleType
{
private:
    double radius;
public:
    circleType(double r=0.0)
    {
        setRadius(r);
    }
    void setRadius(double r=0.0)
    {
        radius = r;
    }
    double getRadius()
    {
        return radius;
    }

    double area()
    {
        return (3.1416 * radius * radius);
    }
    void print()
    {
        cout<<"Radius of Circle is = "<<getRadius()<<"ft"<<endl;
        cout<<"Area of Circle is = "<<area()<<endl;
    }

};
class cylinderType: public circleType
{
	private:
		double height;
	public:
void setheight(double h=0.0)
	{
		height=h;
	}
double getvolume()
{
	return (area()*height*28.3168466);
}
double getsurfaceArea()
{
	return ((2*3.1416*getRadius()*height)+(2*area()));
}
};
int main()
{    double r,h,cliter,cpaint,c3,c4;
    cylinderType C;
	cout<<"Enter the Radius of Circle in feet ";
	cin>>r;
	cout<<"\nEnter the Height of Cylinder in feet ";
	cin>>h;
	cout<<"\nEnter the Shipping Cost per Liter $";
	cin>>cliter;
	cout<<"\nEnter the Paint Cost per square foot $";
	cin>>cpaint;
	C.setRadius(r);
	C.setheight(h);
	cout<<"\nShipping Cost per Liter is $"<<cliter<<"\n";
	cout<<"The Volume of Cylinder is "<<C.getvolume()<<"Liters\n";
	cout<<"Shipping Cost is = $"<<(C.getvolume()*cliter)<<endl;
	cout<<"Paint Cost is  =   $"<<(C.getsurfaceArea()*cpaint)<<endl;
	return 0;
}*/
