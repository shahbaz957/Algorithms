#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "daabcbaabcbc";
    string part = "abc";
    // string s1= "";
    // for (int i = 0 ; i < str.length() ; i++){
    //     if (str[i] == part[0]){
    //         int j = 0 ;
    //         while ((str[i+j] == part[j]) && j < part.length()){
    //             j++;
    //         }
    //         if (j == part.length()){
    //             i+= part.length();
    //         }
    //         s1 += str[i];
    //     }
    //     s1 += str[i];
    // }
    // cout << "String 1 : " << s1 << endl;

    string result = "";
    for (int i = 0 ; i < str.length() ; i++){
        result += str[i];
        if (result.length() >= part.length())
        {if (result.substr(result.length() - part.length()) == part){
            result.erase(result.length() - part.length());
        }}
    }
    cout << result << endl;
    return 0;
}