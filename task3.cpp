/*
 * Date: 23/11/2023
 * Name: Muxlisa
 */
#include <iostream>
using namespace std;

int Sum(int a) {
    //Time complexity: O(log(a))

    if (!a)
        return 0;
    else
        return Sum(a / 10) + a % 10;

}

int main() {
    int A;
    cin >> A;
    cout << Sum(A);
    return 0;
}
