#include <iostream>
using namespace std;
// 变量声明
extern int i, j, k;
extern int c;
float f;

int main()
{
    // 变量定义
    int i, j, k, c;
    // 变量初始化
    i = 1;
    j = 2;
    k = 3;
    c = i + j + k;
    f = 30.0f / 7;
    cout << c << &c << endl;
    cout << f << &f << endl;
    return 0;
}