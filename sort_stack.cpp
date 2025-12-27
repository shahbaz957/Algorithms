#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

void insert_sorted(stack<int>& st , int num ){
    if (st.empty()){
        st.push(num);
        return ;
    }
    int top = st.top();
    if (top <= num){
        st.push(num);
    }
    else{
        st.pop();
        insert_sorted(st , num);
        st.push(top);
    }
}

void reveres_rec(stack<int>& st){
    if (st.empty()){
        return ;
    }
    int num = st.top();
    st.pop();
    reveres_rec(st);
    insert_sorted(st , num);
}

int main() {
    stack<int> st ;
    st.push(5);
    st.push(3);
    st.push(7);
    st.push(1);
    st.push(6);

    reveres_rec(st);
    while (!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}