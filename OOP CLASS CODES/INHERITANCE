#include<iostream>
#include<string>
using namespace std;

// shape,triangle,rectangle(inheritance)
// diamond problem

class point
{
    public:
    int x,y;
    void print_point();
};

void point::print_point()
{
    cout <<"(" << x << " ," << y << ")" << endl;
}

class shape
{
    public:
    int num_points;
    point *points;
    shape();
    void set_points(point *p);
    float get_area();

};

shape::shape()
{
    cout <<"In shape constructor ---- " << endl;
    points = NULL; // initialize
    num_points = 0;

}

float shape::get_area()
{
    return -1.0;
}

class triangle: public shape
{
    public:
    triangle();
    void set_points(point *p);
    void show_shape();
    float get_area();

};

triangle::triangle()
{
    cout <<"in triangle constructor --- " << endl;
    num_points = 3;
}

void triangle::set_points(point *p)
{
    points = p;
}

void triangle::show_shape()
{
    point *temp = points;
    for (int i=0;i<num_points;i++)
    {
        temp->print_point();
        temp++;
    }
}

float triangle::get_area()
{
    int x0,y0,x1,y1,x2,y2;
    point *t = points;
     x0= t->x ;  y0 = t->y ; t++;
     x1 = t->x ; y0 = t->y ; t++;
     x2 = t->x ; y2 = t-> y;

     return abs(x0*(y1-y2) + x1 * (y2-y0)+x1 * (y2-y0)+ x2 * (y0-y1)/2);
}

void create_shape()
{
    triangle *t = new triangle;
    point p1,p2,p3;
    p1.x = p1.y = 0;
    p2.x = p2.y = 10;
    p3.x = p3.y = 25;

    point *points_of_trianlgle;

    points_of_trianlgle[0]=p1;
    points_of_trianlgle[1]=p2;
    points_of_trianlgle[2]=p3;

    t->set_points(points_of_trianlgle);
    t->show_shape();

    cout <<"area of t:" << t->get_area() << endl;


}

int main()
{
    create_shape();
    return 0;
}
