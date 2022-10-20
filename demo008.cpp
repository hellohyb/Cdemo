//
// Created by Huang on 2022/9/12 0012.
//

#include<iostream>

using namespace std;

class Person{
public:
    virtual void msg(string name, int age){
        cout<<"我叫："<<name<<" 我的年龄是："<<age<<endl;

    }
};
class Student:Person{
public:
    void msg(string name, int age){
        cout<<"我叫："<<name<<" 我的年龄是："<<age<<endl;
    }
};
class Teacher:Person{
public:
    void msg(string name, int age){
        cout<<"我叫："<<name<<" 我的年龄是："<<age<<endl;
    }
};
int main(){
    Person p1;
    Student s1;
    p1.msg("hyb",21);
    s1.msg("hyb2",212);
    return 0;
}