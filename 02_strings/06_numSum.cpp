// Sum of the Numbers in a String

/*

Input: stringContainingNumbersAndLetters

Function ExtractNumbersAndSum(stringContainingNumbersAndLetters):
    result = 0
    tempSum = ""

    For each character in stringContainingNumbersAndLetters:
        If character is a digit:
            Append character to tempSum
        Else:
            If tempSum is not empty:
                Convert tempSum to integer and add it to result
                Set tempSum to an empty string

    If tempSum is not empty:
        Convert tempSum to integer and add it to result

    Print result
End Function

*/
#include <iostream>
#include <cctype> // Include the header for isdigit
using namespace std;

void sumOfIntegers(const string &str) {
    int result = 0;
    string tempSum = "";

    for (char ch : str) {
        if (isdigit(ch)) {
            tempSum += ch;
        } else if (!tempSum.empty()) {
            result += stoi(tempSum);
            tempSum = "";
        }
    }

    if (!tempSum.empty()) {
        result += stoi(tempSum);
    }

    cout << result << endl;
}

int main() {
    string str = "123xyz";
    sumOfIntegers(str);

    return 0;
}


