#include <iostream>
using namespace std;

#define MAX 100

struct Stack {
    int arr[MAX];
    int top;
    Stack() {
        top = -1;
    }
    void push(int x) {
        if (top < MAX - 1) arr[++top] = x; 
        
    }
    void pop() { 
        if (top >= 0) 
        {
            top--;
        } 
        
    }
    int peek() {
        return arr[top]; 
        
    }
    bool empty() { 
        return top == -1; 
        
    }
};

int main() {
    int n;
    cin >> n;
    int a[n], res[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    Stack s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.peek() >= a[i]) 
        {
            s.pop();
        }
        if (s.empty()) 
        {
            res[i] = -1;
        }
        else 
        {
            res[i] = s.peek();
        }
        s.push(a[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        cout << res[i] << " ";
    }
    return 0;
}
