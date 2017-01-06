#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <wait.h>
//tamrin 2
using namespace std;

int main()
{
    //pedar wait ro farakhani nakone zambi mishe, ghable farzand zood tar baste mishe
    //top
    int pid;
    pid = fork();

    if(pid>0){
        //wait(NULL);  // hazv zambi
        sleep(5);
        cout<<"parent"<<endl;
        //sleep(50);   //sakhte zambi
    }else if(pid==0){
        //wait(NULL);
        cout<<"child"<<endl;
    }else{

    }

    return 0;
}
