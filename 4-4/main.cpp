#include <iostream>

using namespace std;

int main()
{
    int sum = 2, k;   //1����������2�����������Բ����ж�2��ֱ�Ӵ�3��ʼ�жϡ�
    for(int num = 3; num <= 100; num += 2)
    {
        int count = 0;
        for(k = 1; k <= num; k +=2) //��Ϊ���������ܱ�ż��������������ֻ����С��num������������
        {
            if(num % k == 0)
                count++;

        }
        if(count == 2)
            sum += num;

    }
    cout << "1��100֮��������ĺ��ǣ�" << sum << endl;
}
