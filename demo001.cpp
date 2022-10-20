//
// Created by Huang on 2022/8/4 0004.
//
#include "iostream"
using namespace std;
class Parent{
public:
    int age = 13;
     static void eat(int age){
        cout<<"吃！"<<age<<endl;
    }
};
class Child:public Parent{
public:

};
int main(){
    int a = 1;
    int b = 0;
    cout<<(a>b?"a大于b":"a小于b");
    return 0;
}
