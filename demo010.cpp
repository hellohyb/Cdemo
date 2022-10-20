//
// Created by Huang on 2022/9/22 0022.
//

#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
class Person{
public:
    static int x;
    void add(){
        x = 10;
        x += 10;
        cout<<"xµÄÖµÎª£º"<<x;
    }

};
int main(){
    int i = 10;
    int j = 20;
    swap(&i,&j);
    cout<<i<<" "<<j;
//    Person per;
//    per.add();
//    per.add();
    return 0;
}