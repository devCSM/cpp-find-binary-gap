// cpp_playground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <bitset>

using namespace std;


int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)

    bitset<64> binVal;

    binVal = bitset<64>(N);

    int p1;
    int p2;
    int currentGapSize = 0;
    int gapSize = 0;

    int i = 0;
    int last = binVal.size() - 1;

    cout << binVal << endl;

    p1 = binVal[i];
    p2 = binVal[i + 1];

    while (i < last) {
        if (p1 == 1 && p2 == 0) {
            currentGapSize++;
            i++;
            if (i + 1 <= last)
            {
                p2 = binVal[i + 1];
            }
        }
        else {
            if (currentGapSize > gapSize) {
                gapSize = currentGapSize;
            }
            currentGapSize = 0;
            i++;
            p1 = binVal[i];
            if (i + 1 <= last)
            {
                p2 = binVal[i + 1];
            }
        }
        cout << "binval[" << i << "]. p1 = " << p1 << ". p2 = " << p2 << ". currentGapSize = " << currentGapSize << endl;
    }


    return gapSize;
}

int main()
{


    cout << solution(9) << endl;
    cout << solution(529) << endl;
    cout << solution(20) << endl;
    cout << solution(15) << endl;
    cout << solution(32) << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
