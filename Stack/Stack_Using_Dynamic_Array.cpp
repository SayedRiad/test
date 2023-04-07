#include<bits/stdc++.h>
using namespace std;

class Stack{
public:

    int *arr;
    int stack_sz;
    int arr_cap;
    Stack(){
        arr = new int [1];
        arr_cap = 1;
        stack_sz=0;
    }
    void increase(){
        int *temp;
        temp = new int[arr_cap*2];
        for(int i=0;i<arr_cap;i++)
            temp[i] = arr[i];
        swap(arr,temp);
        delete [] temp;
        arr_cap *= 2;
    }
    void push(int val){
        if(stack_sz >= arr_cap){
            increase();
        }
        arr[stack_sz] = val;
        stack_sz++;
    }

    void pop(){
        if(stack_sz==0){
            cout <<"Stack is Empty!\n";
            return;
        }
        arr[stack_sz-1] = 0;
        stack_sz--;
    }

    int top(){
        if(stack_sz==0){
            cout <<"Stack is Empty!\n";
            return -1;
        }
        return arr[stack_sz-1];
    }
    int getSIZE(){
        return stack_sz;
    }
};
int main()
{
    Stack st;
    st.push(3);
    //cout <<st.getSIZE()<<" "<< st.top() << endl;
    st.push(4);
    //cout <<st.getSIZE()<<" "<< st.top() << endl;
    st.push(5);
    //cout <<st.getSIZE()<<" "<< st.top() << endl;
    /*st.pop();
    cout <<st.getSIZE()<<" "<< st.top() << endl;
    st.pop();
    cout <<st.getSIZE()<<" "<< st.top() << endl;
    st.pop();
    cout <<st.getSIZE()<<" "<< st.top() << endl;*/
    st.push(6);
    st.push(7);
    cout << st.getSIZE()<<" "<<st.top()<<endl;
    st.push(8);
    cout << st.getSIZE()<<" "<<st.top()<<endl;
}

