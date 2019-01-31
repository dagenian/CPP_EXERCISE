#include <iostream>

using namespace std;

int main()
{
    int num, i;
    cout << "请输入一个整数："  <<endl;
    cin >> num;

    for(i = num/2; num % i; i--)
    {

    }

    cout << num << "的最大因子是" << i << endl;

    return 0;
}
