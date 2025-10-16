#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=nullptr;
        right=nullptr;
    }
    
};
node* root=nullptr;
void insert(node* root,int d)
{
    node* newnode=new node(d);
    cout<<root->data<<endl;
    root=newnode;
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    if(root==nullptr)
    {
        insert(root,arr[i]);
    }
    else{
        insert(root->left,arr[i]);
        cout<<root->data;
        insert(root->right,arr[i+1]);
    }
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
