//
// Created by Huang on 2022/9/5 0005.
//

#include<iostream>
using namespace std;
class Base1{ //定义基类Base1
public:
    virtual void display(){
        cout<<"我是Base1::display()"<<endl;
    }
};

class Base2:public Base1{ //公有派生类Base2
public:
    void display(){
        cout<<"我是Base2::display()"<<endl;
    }
};

class Derived:public Base2{
public:
    void display(){
        cout<<"我是Derived::display()"<<endl;
    }
};

void fun(Base1 *ptr){
    ptr->display();
}
class Person{
public:
    virtual void print(){
        cout<<"I'm Person Class"<<endl;
    }
};

class Student:public Person{
public:
    void print(){
        cout<<"I'm Student Class"<<endl;
    }
};

class Professor:public Person{
public:
    void print(){
        cout<<"I'm Professor Class"<<endl;
    }
};
const int N = 3;
int main(){
//    Base1 base1;
//    Base2 base2;
//    Derived derived;
//    fun(&base1);
//    fun(&base2);
//    fun(&

    Person *p[N];
    p[0] = new Person();
    p[1] = new Student();
    p[2] = new Professor();
    for(int i = 0; i < N; i++){
        p[i]->print();
    }
    return 0;
}
