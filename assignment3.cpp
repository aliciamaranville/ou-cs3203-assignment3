#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v) { // calculates sum of all numbers in vector
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum+=v[i];
    }
    return sum;
}

int product(vector<int> v) { // calculates product of all numbers in vector
    int product = v[0];
    for (int i = 1; i < v.size(); i++) {
        product*=v[i];
    }
    return product;
}

vector<int> reverse(vector<int> v) {
    vector<int> reverse;
    for (int i = v.size()-1; i >= 0; i--){
        reverse.push_back(v[i]);
    }
    return reverse;
}

int main() {
    vector<int> v;
    int input;

    cout << "enter numbers (-1 to stop):" << endl;
    cin >> input;
    while (input != -1) {
        v.push_back(input); // puts user inputted numbers into vector
        cin >> input;
    }

    cout << "sum: " << sum(v) << endl;
    cout << "product: " << product(v) << endl;
    vector<int> rev = reverse(v);
    for (int i = 0; i < rev.size(); i++) {
        cout << rev[i] << " ";
    }
    cout << "sum: " << sum(v) << endl; // calculate and print sum
    cout << "product: " << product(v) << endl; // calculate and print product
}

