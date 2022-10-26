//
// Created by Huang on 2022/10/24 0024.
//
#include<iostream>

using namespace std;

typedef struct Link{
    int data;
    struct Link* next;
}Link;

// 初始化链表
Link* initLink(){
    Link* L = new Link;
    L->data = 0;
    L->next = nullptr;
    return L;
}

//头插法
void insertByHead(Link* L,int data){
    Link* node = new Link;
    node->data = data;
    node->next = L->next;
    L->next = node;
}
//尾插法
void insertByTail(Link* L, int data){
    Link* node = L;
    while(node->next){
        node = node->next;
    }
    Link* newNode = new Link;
    newNode->data = data;
    newNode->next = nullptr;
    node->next = newNode;
}
//删除结点
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
//打印输出链表
void print(Link* L){
    Link* node = L->next;
    while(node){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
}
int main(){
    Link* L = initLink();
    insertByHead(L,1);
    insertByHead(L,2);
    insertByHead(L,3);
    insertByHead(L,4);
    insertByTail(L,100);
    deleteElement(L,2);
    print(L);
    return 0;
}
