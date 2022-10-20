//
// Created by Huang on 2022/9/1 0001.
//
#include "iostream"
using namespace std;
#define NUM 17
#define DNUM NUM+NUM
class Time{
private:
    int hour;
    int min;
    int sec;
public:
    void setTime(int hours, int mins, int secs);
    void show() const;
};
void Time::setTime(int hours, int mins, int secs) {
    this->hour = hours;
    this->min = mins;
    this->sec = secs;
}
void Time::show() const {
    cout<<this->hour<<":"<<this->min<<":"<<this->sec<<endl;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
int add(int a, int b){
    return a + b;
}
double add(double a, int b){
    return a + b;
}
float add(float a, float b){
    return a + b;
}

int main(){
//    Time times{};
//    times.setTime(20,21,22);
//    times.show();
    int a = 10;
    int b = 20;
//    cout<<add(20,10)<<endl<<add(20.3,10)<<endl;
int s[][3] = {{1,2,3},{5,6},{7,8},{1,2,4}};
    cout<<DNUM/2 + NUM/2;
    return 0;
}
