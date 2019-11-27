#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int a = add(3, 5);

    cout << a;

    double b = add(1.2, 3.4);

    cout << endl
         << b;

    cout << endl
         << add(1.1, 2.2, 3.3);

    return 0;
}