#include <iostream>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;

int main()
{
int pid;
pid=fork();
if(pid==0)
  {
  int i;
  for(i=0;i<=20;i+=2)
    cout << "  " << i;
    cout<<"\n";
    }
    else if(pid>0)
    {
    wait(NULL);

      int i;
  for(i=1;i<=20;i+=2)
    cout << "  " << i;

    }
    else
    cout<<"creat proccess faild.";
    return 0;
}
