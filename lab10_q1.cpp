#include <iostream>

using namespace std;

class Box{
//command for height, length and breadth-public
    public:
    double length;
    double breadth;
    double height;
};
//function for volume
int main(){
    Box box1;
    Box box2;
    double volume;
    
//box 1
box1.height=5.6;
box1.length=7.2;
box1.breadth=3.2;

//volume of box1
volume=box1.height*box1.length*box1.breadth;
cout<<"Volume of box1 "<<volume<<endl;

//box 2
box2.length=4.6;
box2.height=7.4;
box2.breadth=2.1;

//volume of box2
volume=box2.height*box2.length*box2.breadth;
cout<<"Volume of box2 "<<volume<<endl;
return 0;
}
