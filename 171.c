#include<iostream>
using namespace std;
class time1
{
int hours,minutes;
public:
void gettime(int h,int m);
void puttime(void)
{
cout<<hours<<"hours and"<<"\n";
cout<<minutes<<"minutes"<<"\n";
}
void sum(time1,time1);
};
void time1 :: sum(time1 t1,time1 t2)
{
minutes=t1.minutes+t2.minutes;
hours=minutes/60;
minutes=hours+t1.hours+t2.hours;
}
int main()
{
time1 t1,t2,t3;
t1.gettime(2,45);
t2.gettime(3,30);
t3.sum(t1,t2);
cout<<"t1=";
t1.puttime();
cout<<"t2=";
t2.puttime();
cout<"t3=";
cout<<"t3=";
t3.puttime();
return(0);
}

