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

int main() {
    vector<int> v;
    int input;

    cout << "enter numbers (-1 to stop):" << endl;
    cin >> input;
    while (input != -1) {
        v.push_back(input);
        cin >> input;
    }

    cout << "sum: " << sum(v) << endl;
    cout << "product: " << product(v) << endl;
}

