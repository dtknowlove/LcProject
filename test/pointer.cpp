#include <iostream>
using namespace std;
const int MAX = 3;

void PositivePrint(int var[]);
void NegativePrint(int var[]);
void PointerPrint(int var[]);

int main()
{
    int var[MAX] = {10, 11, 20};
    *(var + 2) = 1000;
    // PositivePrint(var);
    // NegativePrint(&var[MAX - 1]);
    PointerPrint(var);
    // int *ptr = NULL;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    return 0;
}

void PositivePrint(int var[])
{
    int *p;
    p = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "]=";
        cout << p << endl;
        cout << "Vaule of var[" << i << "]=";
        cout << *p << endl;
        p++;
    }
}

void NegativePrint(int *var)
{
    int *p;
    p = var;
    for (int i = MAX - 1; i >= 0; i--)
    {
        cout << "Address of var[" << i << "]=";
        cout << p << endl;
        cout << "Vaule of var[" << i << "]=";
        cout << *p << endl;
        p--;
    }
}

void PointerPrint(int var[])
{
    int *p[MAX];
    for (int i = 0; i < MAX; i++)
    {
        p[i] = &var[i];
    }
    for (int i = 0; i < MAX; i++)
    {
        cout << "Vaule of *p[" << i << "]=";
        cout << *p[i] << endl;
    }
}
