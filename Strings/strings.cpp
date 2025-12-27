#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool isPalindrome(string s){
    int st = 0 ;
    int end = s.length() - 1;
    while (st < end){
        if (s[st] != s[end]){
            return false;
        }
        st++ , end--;
    }
    return true;
}
int main()
{
    // string str = "Shahbaz"; // Dynamically Typed Resize on Runtime
    // string str2 = "Baig";
    // string str3 = str + " " + str2;
    // cout << str3 << endl;
    // cout << str.length() ;

    // string str;
    // getline(cin , str);
    // cout << str;

    // const char *str = "Shahbaz"; // cuz Shahbaz is string literal of const type so use const pointer for it
    // for (int i = 0; i < str[i] != '\0'; i++)
    // {
    //     cout << *(str + i);
    // }

    string str = "Shahbaz";
    // int i = 0 ; 
    // int r = str.length() - 1;
    // while( i <= r){
    //     char tmp = str[i];
    //     str[i] = str[r];
    //     str[r] = tmp;
    //     i++;
    //     r--;
    // }
    // cout << str;

    // reverse(str.begin() , str.end());
    // cout << str;
    cout << isPalindrome("racear") << endl;
    return 0;
}