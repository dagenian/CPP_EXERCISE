#include <iostream>

using namespace std;

int main()
{
    int sum = 2, k;   //1不是素数，2是素数。所以不用判断2，直接从3开始判断。
    for(int num = 3; num <= 100; num += 2)
    {
        int count = 0;
        for(k = 1; k <= num; k +=2) //因为奇数不可能被偶数所整除，所以只需检查小于num的所有奇数。
        {
            if(num % k == 0)
                count++;

        }
        if(count == 2)
            sum += num;

    }
    cout << "1到100之间的素数的和是：" << sum << endl;
}
