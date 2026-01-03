#include<iostream>
#include<string.h>
using namespace std; 
class student {
    public:
    string name;
    int age;
    int marks;
    // if same naming is used, we have to use this-> to make difference between the parameter and the attribute of the class 
    student (string name,int marks,int age ){
        this->age=age;
        this->marks=marks;
        this->name=name;
    }
    
};

void print(student c){
    cout<<c.name<<" "<<c.age<<" "<<c.marks<<endl;
}

int main(){

student s("rajat",10,20);
print(s);


}

 