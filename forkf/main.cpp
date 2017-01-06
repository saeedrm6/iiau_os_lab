#include <iostream>
#include<unistd.h>

using namespace std;

int main()
{
int pid;


pid=fork();

if(pid<0)
{
cout<<"creat process faild"<<endl;
}
else if(pid==0)
{
cout<<"i am child"<<endl;
}
else{
cout<<"i am parent"<<endl;
}


    return 0;
}
