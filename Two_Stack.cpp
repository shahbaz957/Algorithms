#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int arrSize = size*2;
    int arr[arrSize];
    int p1 = (arrSize/2) - 1;
    int p2 = arrSize/2;
    char ch ;
    while (true){
        cin >> ch;
        if (ch == 'f'){
            int num ; 
            cin >> num;
            if (p2 < arrSize){
                arr[p2++] = num;
            }
            else{
                cout << "Stack is full";
            }
        }
        // else if (ch =)
    }
    return 0;
}