/*
 * Date: 23/11/2023
 * Name: Muxlisa
 */
#include <iostream>
using namespace std;

int reverse(int in, int ni = 0){
    //Time complexity: O(log(in))
    //in - the input

    if (in == 0)
        return ni;
    else
        return reverse(in/10, in % 10 + ni * 10);

}

int main() {

    int input;
    cin >> input;
    cout << reverse(input);

    return 0;
}
