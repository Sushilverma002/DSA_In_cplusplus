#include <iostream>
#include <math.h>
using namespace std;
// decimal to binary
int main()
{
    int n;
    cin >> n;
    float answer = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        n = n >> 1;
        i++;
    }
    cout << "Answer is " << answer << endl;
    return 0;
}

