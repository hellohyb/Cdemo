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
        cout<<"���캯����ɣ�"<<endl;
    }
    ~Person(){
        cout<<"������������"<<endl;
    }
    void printMsg(int age, string name){
        cout<<"���䣺"<<age<<" ����:"<<name<<endl;
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
