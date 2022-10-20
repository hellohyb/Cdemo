//
// Created by Huang on 2022/10/20 0020.
//
#include<iostream>

using namespace std;

typedef struct Link{
    int data;
    int* next;
}Link;
void initLink(){
    Link* L = new Link;
    L->data = 0;
}
int main(){
    Link* l1 = new Link;
    l1->data = 0;
    cout<<l1->data;

    return 0;
}
