//
// Created by Huang on 2022/8/6 0006.
//
#include <iostream>
#include<cmath>
#include <vector>
using namespace std;

class Fun{
public:
   double niu(double res){
        double x,f,f1;
        do{
            x = res;
            f = 2*x*x*x - 4*x*x + 3*x - 6;
            f1 = 6*x*x - 8*x + 3;
            res = x - f/f1;
        }while(fabs(x - res) >= 1e-6);
        return x;
    }
    int gen(int a, int b){
       int temp;
       while(b != 0){
           temp = a % b;
           a = b;
           b = temp;
       }
       return a;
   }
   void test(){
       int x;
       cin>>x;
       int a[20],k = 0,r;
       do{
           r = x % 2;
           a[k++] = r;
           x/=2;
       }while(x!=0);
       for (int i = 0; i < k / 2; ++i) {
           int temp = a[k - i - 1];
           a[k - i - 1] = a[i];
           a[i] = temp;
       }
       for (int i = 0; i < k; ++i) {
           cout << a[i] << " ";
       }
   }

};


int main(){
    for(int i = 1; i < 10; i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<"*"<<i<<"="<<j*i<<"\t";
        }
        cout<<endl;
    }

//    Fun f;
//    f.niu(1.5);
//    cout<<f.gen(100,58)<<endl;
//    f.test();
    return 0;
}
