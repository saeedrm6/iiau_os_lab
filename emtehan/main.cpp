#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int pid;
    int user_cin;
    int fd[2];
    int pp;
    int a;
    int b;
    pp = pipe(fd);
    if (pp == -1){
        cout<<"Create pipe was faield"<<endl;
        return 0;
    }else{
        cout<<"Create pipe was success"<<endl;
        pid=fork();
        if(pid<0){
            cout<<"Create fork was faield"<<endl;
            return 0;
        }else if(pid==0){
            cout<<"Please Enter Number :"<<endl;
            cin>>user_cin;
            a = user_cin;
            write(fd[1],&a,sizeof(int));
        }else{
            read(fd[0],&b,sizeof(int));
            cout<<b<<endl;
            if(b%2==0){
                execvp("firefox",NULL);
            }else{
                execvp("libreoffice",NULL);
            }

        }


    }



    return 0;
}
