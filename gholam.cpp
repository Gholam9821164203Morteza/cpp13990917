#include <iostream>
#include <math.h>
using namespace std;

class point{
public:
  double x, y;
  point (const double px = 0 ,const double py = 0){   
    x = px;
    y = py;
    cout << "constructor is bield" << endl;
  }
};
class Shape
{
public:
  virtual double calculateArea() = 0;
  virtual double calculateprimeter() = 0;
};
class rectangle : public Shape{
protected:
  point center;
  double width , height;
public:
  rectangle(const point p = 0,const double w = 0 ,const double h = 0){
    center = p;
    width = w;
    height = h;
    cout << "The width is " << width << " and height is "
    << height << " and point's of center is x: " << center.x
    << " y:" << center.y << endl;
    cout << "constructor for rectangle is bield" << endl;
  }
  double calculateArea(){
    return width*height;
  }
  double calculateprimeter(){
    return 2*(width + height); 
  }
  ~rectangle(){
    cout << "distructor for rectangle" << endl;
  }
};

class square:public Shape{
protected:
  point center;
  double side;
public:
  square(const point p = 0,const double s = 0){
    center = p;
    side = s;
    cout << "The side is " << side << " and point's of center is x: " << center.x
    << " y:" << center.y << endl;
    cout << "constructor for rectangle is bield" << endl;
  }
  double calculateArea(){
    return side*side;
  }
  double calculateprimeter(){
    return 4*side; 
  }
  ~square(){
    cout << "distructor for square" << endl;
  }
};
class Triangle : public Shape{
protected:
  point center;
  double side1, side2 , side3 , p , s;
public:
  Triangle(const point p = 0 ,const double s1  = 0 , const double s2 = 0 , const double s3 = 0){
    center = p;
    side1 = s1;
    side2 = s2;
    side3 = s3;
    cout << "The side's of the triangle is " << side1 << " , "
    << side2 << " , " << side3 << " and point's of the center is x: " << center.x
    << " y:" << center.y << endl;
    cout << "constructor for triangle is bield" << endl;
  }
  double calculateArea(){
  p = (side1+side2+side3)/2;
  s = sqrt(p*(p-side1)*(p-side2)*(p-side3));
   return s;
  }
  double calculateprimeter(){
   return side1+side2+side3;
  }
  ~Triangle(){
    cout << "distructor for triangle" << endl;
  }
};

class Circle: public Shape{
protected:
  point  C;
  double R;
public:
  Circle (const point p = 0 ,const double r = 0){
    C = p;
    R = r;
    cout << "The radius is " << R << " and the point'center is x:" 
    << C.x << "  y:" << C.y << endl;
    cout << "constructor for circle is bield" << endl;
  }
  double calculateprimeter(){
    return 2*R*3.14;
  }
  double calculateArea(){
    return 3.14*(R*R);
  }
  ~Circle(){
    cout << "distructor for Circle" << endl;
  }
};

int main ()
{
  point p1 (4,6);
  Circle c (p1,5);
  cout << "The circle's Area is: " << c.calculateArea() << endl;
  cout << "The circle's primeter is: " << c.calculateprimeter() << endl;
  point p2 (3,7);
  rectangle r (p2,5,6);
  cout << "The Rectangle's Area is: " << r.calculateArea() << endl;
  cout << "The Rectangle's primeter is: " << r.calculateprimeter() << endl;
  point p3 (3,7);
  square s (p3,5);
  cout << "The Square's Area is: " << s.calculateArea() << endl;
  cout << "The Square's primeter is: " << s.calculateprimeter() << endl;
  point p4 (3,7);
  Triangle t (p4,3,4,5);
  cout << "The Triangle's Area is: " << t.calculateArea() << endl;
  cout << "The Triangle's primeter is: " << t.calculateprimeter() << endl;
  return 0;
}