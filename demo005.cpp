//
// Created by Huang on 2022/8/10 0010.
//
#include<iostream>
#include<vector>
using namespace std;
typedef struct TreeNode{
    char data;
    TreeNode* left;
    TreeNode* right;
}TreeNode;

//�����������������
void CreateTree(TreeNode* node){
    char x;
    cin >> x;
    if(x == '*'){
        node = nullptr;
        return ;
    }else{
        node = new TreeNode;
        node->data = x;
        CreateTree(node->left);
        CreateTree(node->right);
    }
}

//�������
void preOrder(const TreeNode& node) {

}
int main(){
    int n;
    int temp;
    cout<<"���������鳤�ȣ�";
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i < nums.size(); i++){
        nums[i] = i;
    }
    for(int i = 0; i < n / 2; i++){
        temp = nums[i];
        nums[i] = nums[n - i - 1];
        nums[n - i - 1] = temp;
//        swap(nums[i],nums[n - i - 1]);

    }
    for(int j:nums){
        cout<<j<<endl;
    }
    cout<<"���һ��Ԫ��Ϊ��"<<nums.back();
    return 0;
}
