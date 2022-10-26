//
// Created by Huang on 2022/10/25 0025.
//
#include<iostream>

using namespace std;

typedef struct Link{
    int data;
    struct Link* next;
}Link;

Link* initLink(){
    Link* L = new Link;
    L->data = 0;
    L->next = nullptr;
    return L;
}
// 头插法
void insertHead(Link* L, int data){
    Link* node = new Link;
    node -> data = data;
    node->next = L->next;
    L->next = node;
}
// 尾插法
void insertTail(Link* L, int data){
    Link* node = L;
    while(node->next){
        node = node->next;
    }
    Link* newNode = new Link;
    newNode->data = data;
    newNode->next = nullptr;
    node->next = newNode;
}
// 打印输出
void print(Link* L){
    Link* node = L->next;
    while(node){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
}
bool deleteElement(Link* L, int data){
    Link* node = L->next;
    while(node){
        if(node->data == data){
            L->next = node->next;
            delete(node);
            return true;
        }
        L = node;
        node = node->next;
    }
    return false;
}
int main(){
    Link* L = initLink();
    insertHead(L,100);
    insertHead(L,200);
    insertHead(L,300);
    insertTail(L,1);
    deleteElement(L,200);
    print(L);
    return 0;
}
