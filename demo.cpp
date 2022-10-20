//
// Created by Huang on 2022/10/6 0006.
//

#include<iostream>
using namespace std;

class Person{
public:
    Person(){
        cout<<"我是"<<endl;
    };
    ~Person(){
        cout<<"我是析构函数"<<endl;
    };
private:

};
double calculate(double x,int i){
    if(i == 3) return 1 + 1 / x;
    return 1 + 1 / calculate(x,i+1);
}
int main(){
    cout<<calculate(5.0, 1)<<endl;
    Person person;
    return 0;
}