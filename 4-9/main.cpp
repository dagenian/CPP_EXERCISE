#include <iostream>

using namespace std;

int main()
{
    int max = 0, min = 100, total = 0, ssnumber = 0, score;

    cout << "请输入第1位学生成绩：" <<endl;
    cin >> score;

    while( score != -1)
    {
        ssnumber++;
        total += score;
        if(score > max) max = score;
        if(score < min) min = score;
        cout  << "请输入第" << ssnumber <<"位学生成绩：" <<endl;
        cin >> score;

    }

    cout << "总分为" << total << endl;
    cout << "最高分为" << max << endl;
    cout << "最低分为" << min << endl;
    cout << "平均分为" << total/ssnumber << endl;

    return 0;
}
