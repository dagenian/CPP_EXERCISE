#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double ONEYEARRATE=0.025,TWOYEARRATE=0.028,CURRENTRATE=0.012;
    int startdate,enddate,type;
    double balance,interest,rate;

    for(int i=0;i<2;++i)
    {
        cout<<"���������"<<endl;
        cin>>balance;
        cout<<"������������ 1-1�꣬2-2�꣬0-����"<<endl;
        cin>>type;
        cout<<"��ʼ���"<<endl;
        cin>>startdate;
        cout<<"��ֹ���"<<endl;
        cin>>enddate;

        switch(type)
        {
            case 1:rate=ONEYEARRATE;//��=0.025
            case 2:rate=TWOYEARRATE;//��=0.028
            case 0:rate=CURRENTRATE;//��=0.012
        }
        interest=balance*pow(1+rate,enddate-startdate)-balance;
        cout<<balance<<"Ԫ��"<<enddate-startdate<<"�깲������Ϣ"<<interest<<"Ԫ"<<endl;
    }

    return 0;
}
