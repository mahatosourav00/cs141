
//including library
#include <iostream>
using namespace std;
//Declaration of class 
class Point
{
	public:
//class constructor
	Point(); 
	//class constructor-x and y coordinate is xval and yval

	Point(int xval, int yval);
	//function to move x and y as dx, dy is made
	void Move(int dx, int dy);
	//functions to get value of x, y:
	int Get_X() const;
	int Get_Y() const;
	//functions for setting x, y to xval, yval are:  
	void Set_X(int xval);
	void Set_Y(int yval);

	void print();
//private data representing x and y 
	private:
	int X;
	int Y;
};  


//Methods for class Point

//class constructor takes 0 when no values are mentioned X,
Point::Point()
{
	X = 0;
	Y = 0;
}
//class constructor sets X, Y to given values x1,y1
Point::Point(int xval, int yval)
{
	X = xval
	Y = yval;
}
//function executes and increases x and y to x+dx to y+dy .
void Point::Move(int dx, int dy)
{
	X += dx;
	Y += dy;
}
//returning new value of x coordinate
int Point::Get_X() const
{
	return X;
}

//returning new value of the Y coordinate
int Point::Get_Y() const
{
	return Y;
}
//Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
	X = xval;
} 
//Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
	Y = yval;
} 
    
void Point::print()
{
	cout<<"("<<X<<","<<Y<<")  ";
}
//Declaration of class Rectangle

//adding class rectangle  
class Rectangle
{
	private:
	Point a,b,c,d;
//Methods for class Rectangle
 
	public:
	Rectangle(Point p, Point q)
	{
		d.Set_X(p.Get_X());
		d.Set_Y(p.Get_Y());
		b.Set_X(q.Get_X());
		b.Set_Y(q.Get_Y());
		a.Set_X(d.Get_X());
		a.Set_Y(b.Get_Y());
		c.Set_X(b.Get_X());
		c.Set_Y(d.Get_Y());
	}
	Rectangle()
	{
		d.Set_X(0);
		d.Set_Y(0);
		b.Set_X(1);
		b.Set_Y(1);
		a.Set_X(0);
		a.Set_Y(1);
		c.Set_X(1);
		c.Set_Y(0);
	}
	void print()
	{
		cout<<" coordinates of  mensioned  points of the rectangle are ";
		a.print();
		b.print();
		c.print();
		d.print();
		cout<<endl;
	}
};
//test class point and rectangle
int main()
{
	//Declare a point
	Point p1;
	cout<< "The x value for p1 is " << p1.Get_X() << endl;
	cout<< "The y value for p1 is " << p1.Get_Y() << endl;

	//Declare a point with coordinates X = 2, Y = 3:
	Point p2(2, 3);
	cout<< "The x value for p2 is " << p2.Get_X() << endl;
	cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	//Move point p2 by 1, -1;
	p2.Move(1, -1);
	cout<< "After  moving " << endl;
	cout<< "The x value for p2 is " << p2.Get_X() << endl;
	cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	//Test member function print on points p1, p2:
	cout<<"The coordinates of p1 are ";
	p1.print();
	cout<<endl<<"The coordinates of p2 are ";
	p2.print();
	//Test of the class Rectangle   
	Rectangle r1;
	Rectangle r2(p1,p2);
	cout<<endl<<" Rectangle r1 - ";
	r1.print();
	cout<<endl<<" Rectangle r2 - ";
	r2.print();
	return 0;
}
