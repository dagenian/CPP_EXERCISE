#include <iostream>

using namespace std;

int main()
{
    int max = 0, min = 100, total = 0, ssnumber = 0, score;

    cout << "�������1λѧ���ɼ���" <<endl;
    cin >> score;

    while( score != -1)
    {
        ssnumber++;
        total += score;
        if(score > max) max = score;
        if(score < min) min = score;
        cout  << "�������" << ssnumber <<"λѧ���ɼ���" <<endl;
        cin >> score;

    }

    cout << "�ܷ�Ϊ" << total << endl;
    cout << "��߷�Ϊ" << max << endl;
    cout << "��ͷ�Ϊ" << min << endl;
    cout << "ƽ����Ϊ" << total/ssnumber << endl;

    return 0;
}
