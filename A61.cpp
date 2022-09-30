#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{

int inputvalid(int b, int e);
void printPrime(int begin, int end);


    int begin, end;
    int i, p;

    do {
        cout << "Enter your range [from, to]" << endl;
        cin >> begin >> end;

    } while (inputvalid(begin, end));
    printPrime(begin, end);

}

    
int inputvalid(int b, int e) {
    if (b >= e || b < 2 || e < 0)
        return 1;
    else
        return 0;
}

void printPrime(int begin, int end) {
    int p, i;
    for (p = begin; p <= end; p++) {
        if (p == 0 || p == 1)
            continue;
        for (i =2; i <= (p / 2); i++)
            if (p % i == 0)
                break;
        if (i > (p / 2))
            cout << " Prime Number : " << p << endl;
    }
}


