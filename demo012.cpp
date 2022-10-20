//
// Created by Huang on 2022/10/13 0013.
//
#include<iostream>

using namespace std;

class Person{
public:
    Person(){
        age = 0;
        name = " ";
        cout<<"构造函数完成！"<<endl;
    }
    ~Person(){
        cout<<"我是析构函数"<<endl;
    }
    void printMsg(int age, string name){
        cout<<"年龄："<<age<<" 姓名:"<<name<<endl;
    }
private:
    int age;
    string name;
};

int main(){
    Person person;
    person.printMsg(12,"hyb");
    return 0;
}
