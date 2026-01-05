#include<iostream>
#include<string.h>
using namespace std;
class student {
    public:
    string name;
    int age;
    int marks;
};

// another example showing class 
class car {
    public:
    string name;
    int seat;
    int avg;
};

int main(){

    // about the first class 
student s;
s.name="rajat";
s.marks=10;
s.age=20;
cout<<s.name<<" "<<s.marks<<" "<<s.age<<endl;

// now about the car class 
car c;
c.name="bmw";
c.avg=5;
c.seat=4;
cout<<c.name<<" "<<c.seat<<" "<<c.avg<<endl;

}
