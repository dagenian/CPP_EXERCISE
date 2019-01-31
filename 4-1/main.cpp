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
        cout<<"请输入存款金额："<<endl;
        cin>>balance;
        cout<<"请输入存款年限 1-1年，2-2年，0-活期"<<endl;
        cin>>type;
        cout<<"起始年份"<<endl;
        cin>>startdate;
        cout<<"终止年份"<<endl;
        cin>>enddate;

        switch(type)
        {
            case 1:rate=ONEYEARRATE;//或=0.025
            case 2:rate=TWOYEARRATE;//或=0.028
            case 0:rate=CURRENTRATE;//或=0.012
        }
        interest=balance*pow(1+rate,enddate-startdate)-balance;
        cout<<balance<<"元存"<<enddate-startdate<<"年共收益利息"<<interest<<"元"<<endl;
    }

    return 0;
}
