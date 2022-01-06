/* 
 * In c++, a term stream is used in case of IO. stream means sequence of bytes in memory. so, sequence of bytes are called stream. 
 *
 * input stream: means flow of bytes from a input device to our memory (RAM)
 *
 * output stream: means flow of bytes from our memory to a output device
 *
 */

#include <iostream>

using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the Value of num1, num2: "; /* insertion operator */
    cin >> num1;
    cin >> num2;/*extraction operator */
    cout << "The sum is " << num1 + num2 << "\n";
    return 0;
}
