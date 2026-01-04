#include<iostream>
#include<string.h>
using namespace std;
class student {
    public:
    string name;
    int age;
    int marks;
};
// function to print the different attribute of the student 
void print(student c){
    cout<<c.name<<" "<<c.age<<" "<<c.marks<<endl;
}
// object is pass by value , so we have to use the '&'
void change (student &s){
    s.name="prince";

}



int main(){

   
student s1;
s1.name="rajat";
s1.marks=10;
s1.age=20;
//cout<<s1.name<<" "<<s1.marks<<" "<<s1.age<<endl;
student s2;
s2.name="vikas";
s2.marks=1;
s2.age=22;
//cout<<s2.name<<" "<<s2.marks<<" "<<s2.age<<endl;
// printing through the function 
// print(s1);
// print(s2);
print(s1);
change(s1);
print(s1);


}
