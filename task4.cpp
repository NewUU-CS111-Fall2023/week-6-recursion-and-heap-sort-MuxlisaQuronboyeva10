/*
 * Date: 23/11/2023
 * Name: Muxlisa
 */
#include <iostream>
using namespace std;

bool PrimeOrNot(int n, int a = 2){
    //Time complexity: O(n^(1/2))

    if (!(n % a))
        return false;
    else if (n > a * a)
        return PrimeOrNot(n, ++a);
    else
        return true;
}

int main() {
    int A;
    cin >> A;

    if (PrimeOrNot(A))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
