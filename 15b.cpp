 #include<iostream>
    using namespace std;

    int add(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + add(n - 1); 
    }
    }

    int main() {
    int X, n;
    cout << "Enter a number: ";
    cin >> n;
    X = add(n);
    cout << X;
    return 0;
    }
