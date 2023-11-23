/*
 * Date: 23/11/2023
 * Name: Muxlisa
 */
#include <iostream>
using namespace std;

bool YesOrNo(int a) {
    //Time complexity: O(log(a))

    if (!(a % 2)){
        YesOrNo(a / 2);
    }
    else
        return a == 1;
}

int main() {
    int A;
    cin >> A;
    if (YesOrNo(A))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
