#include <iostream>

using namespace std;

int main()
{
    int num, i;
    cout << "������һ��������"  <<endl;
    cin >> num;

    for(i = num/2; num % i; i--)
    {

    }

    cout << num << "�����������" << i << endl;

    return 0;
}
