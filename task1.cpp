/*
 * Date: 23/11/2023
 * Name: Muxlisa
 */
#include <iostream>
using namespace std;

int Order(int a1, int a2){
    //Time complexity: O(n)
    // n - the number of elements between a1 and a2
    if (a1 > a2) {
        cout << a1 << ' ';
        return Order(a1 - 1, a2);
    } else if (a1 < a2) {
        cout << a1 << ' ';
        return Order(a1 + 1, a2);
    } else
        cout << a1;
        return 0;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    Order(a, b);
    return 0;
}
