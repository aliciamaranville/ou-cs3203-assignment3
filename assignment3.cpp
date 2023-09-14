#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum+=v[i];
    }
    return sum;
}

int product(vector<int> v) {
    int product = v[0];
    for (int i = 1; i < v.size(); i++) {
        product*=v[i];
    }
    return product;
}

