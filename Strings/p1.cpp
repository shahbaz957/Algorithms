#include <iostream>
using namespace std;

int main() {
    char arr[100];
    cout << "Enter a str : ";
    cin.getline(arr , 100 , '.');
    cout << "Entered Str : " << arr ;
    return 0;
}