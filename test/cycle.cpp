#include <iostream>
using namespace std;

int Max(int, int);
void Swap(int *a, int *b);
void SwapRef(int &a, int &b);

int main()
{
    int myArray[5] = {1, 2, 3, 4, 5};
    int max = myArray[0];
    for (auto &x : myArray)
    {
        max = Max(max, x);
    }
    cout << max << endl;
    int a = 10;
    int b = 20;
    // Swap(&a, &b);
    SwapRef(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    char aa[] = "hello";
    cout << aa << endl;
    return 0;
}

int Max(int a, int b)
{
    return a > b ? a : b;
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SwapRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}