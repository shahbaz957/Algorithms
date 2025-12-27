#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> vec;
    for (int i = 1 ; i <= 5 ; i++){
        vec.push_back(i);
    }
    int k = 3;
    for (int st = 0 ; st < vec.size() ; st += k){
        int l = st;
        if ((st+k-1) >= vec.size()){
            break;
        }
        int r = min(st + k - 1, (int)vec.size() - 1);
        while (l < r){
            swap(vec[l] , vec[r]);
            l++;
            r--;
        }
    }
    for (int el : vec){
        cout << el << ' ' ;
    }
    return 0;
}