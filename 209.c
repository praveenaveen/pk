#include<iostream>
using namespace std;
class test
{
int code;
static int count;
public:
void getcode(void)
{
code=++count;
}
void showcode(void)
{
cout<<"object number:"<<code<<"\n";
}
static void showcount(void)
{
cout<<"count:"<<count<<"\n";
}
};
int test :: count;
int main()
{
test t1,t2;
t1.getcode();
t2.getcode();
test :: showcount();
test t3;
t3.getcode();
test :: showcount();
t1.showcode ();
t2.showcode ();
t3.showcode ();
return 0;
}

