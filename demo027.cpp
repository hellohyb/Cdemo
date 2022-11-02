//
// Created by Huang on 2022/11/2 0002.
//
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class JiSu{
public:
    JiSu();
    void MaoPao(vector<int>&arr);
private:
    string name;
    string gender;
    int age;
};
JiSu::JiSu() {
    this->age = 21;
    this->gender = "man";
    this->name = "hyb";
}

void JiSu::MaoPao(vector<int> &arr) {
    int len = arr.size();
    for(int i = 0; i < len; i++)
        for(int j = 0; j < len - i - 1; j++)
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

//x^5+2x^3 - 2x - 1
// 2*x^3-4*x^2+3*x-6在x = 1.5
double fun1(double x){
    double result = 2*pow(x,3.0) - 4 * pow(x,2.0) + 3 * x - 6;
    return result;
}
double fun2(double x){
    double res = 6 * pow(x,2.0) - 8 * x + 3;
    return res;
}
double cal(){
    double res,f1,f2;
    double x = 100;
    int cnt = 0;
    do{
        f1 = fun1(x);
        f2 = fun2(x);
        res = f1/f2; //计算斜率
        x-=res;
        cnt++;
    }while(fabs(res) > 1e-5);
    cout<<"最终的根为："<<x;
}
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
void insertHead(Link* L,int data){
    Link* node = new Link;
    node->data = data;
    node->next = L->next;
    L->next = node;
}
// 尾插法
void insertTail(Link* L,int data){
    Link* node = L;
    while(node->next){
        node = node->next;
    }
    Link* newNode = new Link;
    newNode->data = data;
    newNode->next = nullptr;
    node->next = newNode;
}
//delete
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
// void 打印输出
void print(Link* L){
    Link* node = L->next;
    while(node){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
}
int main(){
    vector<int>arr = {3,1,2,4,5,6,9,8,7};
    JiSu jiSu;
    jiSu.MaoPao(arr);
    for(int i : arr)
        cout<<i<<" ";
    cout<<endl;
    cal();
//    Link* L = initLink();
//    insertHead(L,1);
//    insertHead(L,2);
//    insertHead(L,3);
//    insertTail(L,10);
//    insertTail(L,20);
//    insertTail(L,30);
//    deleteElement(L,30);
//    print(L);
    return 0;
}
