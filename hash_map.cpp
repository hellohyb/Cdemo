//
// Created by Huang on 2022/10/21 0021.
//
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    //创建哈希表
    unordered_map<int, int>m;
    unordered_map<int ,int>n;
    //向哈希表插入数据（键值对）
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int ,int>(2,20));
    m[3] = 30;
    m[4] = 40;
    n[1] = 100;
    //两个哈希表互相交换
    swap(m,n);
    //打印哈希表长度
    cout<<m.size();
    //其他成员函数
    /*
     * 例：m为哈希表名
     * m.begin() 指向哈希表的第一个容器
     * m.end() 指向哈希表的最后一个容器 (实则超出了哈希表长度，为空)
     * m.find(x) 查找key为x的键值是否存在，是返回元素位置，否返回map.end()
     * 判断存在条件 if( m.find(x) != m.end() )
     * m.count(x) 查找key为x的键值数量（1或0个），是返回1，否返回0
     * m.size() 返回哈希表长度大小
     * m.empty() 判断是否为空，为空返回true，不为空返回false
     * m.clear() 清空哈希表
     */
    return 0;
}
