#include<iostream>
#include<string.h>
using namespace std; 
class student {
    public:
    string name;
    int age;
    int marks;
    student (string s,int n,int a ){
        age=a;
        marks=n;
        name=s;
    }
    // if we once use constructor then we cant use previous dot way of initialize directly , we have to mention the default constructor then we can use dot operator foer the intialization also 
    ~student(){// destructor 
    cout<<"now the code is over "<<endl;
}
    student (){// default constructor 
    }
};
void print(student c){
    cout<<c.name<<" "<<c.age<<" "<<c.marks<<endl;
}
int main(){
// new way of intialize
student s("rajat",10,20);
print(s);
student s1;
s1.name="adarsh";
s1.age=21;
s1.marks=8;
print(s1);
student s3(s);// in built convenience to copy the content of one object into another 
print(s3);

}
