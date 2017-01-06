#include <iostream>
#include <wait.h>
#include <unistd.h>
//tamrin1
using namespace std;

int main()
{
    int pid ;
    pid = fork();
    if(pid>0){
        cout<<"I am parent"<<endl;
    }else if(pid==0){
        //execvp("firefox",NULL);
        execvp("firefox",0);
    }else{
        cout<<"Create process failed."<<endl;
    }
    return 0;
}
