#include<iostream>
using namespace std;
class employee
{
char name[30];
float age;
public:
void getdata(void);
void putdata(void);
};
void employee :: getdata(void)
{
cout<<"name:"<<name<<"\n";
cout<<"age:"<<age<<"\n";
}
cout<<"enter name";
cin>>name;
cout<<"enter age";
cin>>age;
}
const int size=3;
int main()
{
employee manager [size];
for(int i=0;i<size;i+1)
{
cout<< "\n detais of manager"<<i+1<<"\n";
manager[i].getdata();
}
cout<<"\n";
for(int i=0;i<size;i+1)
{
cout<<"\n manager"<<i+1<<"\n";
manager[i]putdata();
}
return 0;
}
