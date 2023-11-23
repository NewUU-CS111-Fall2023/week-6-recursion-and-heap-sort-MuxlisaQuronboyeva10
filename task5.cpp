/*
 * Date: 23/11/2023
 * Name: Muxlisa
 */
#include <iostream>
using namespace std;

bool palindrome(string word, int index = 0){
    //Time complexity: O(n)
    //n - the length of word


    if (word.at(index) != word.at(word.length() - 1 - index))
        return false;
    else if (index > word.length()/2)
        return true;
    else
        return palindrome(word, ++index);



}

int main() {

    string A;
    cin >> A;

    if (palindrome(A))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

