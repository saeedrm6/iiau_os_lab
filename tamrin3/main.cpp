#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>
using namespace std;

int main()
{
    //sakhte pipe
    int fd[2];
    int pp;
    int pid;
    int r;
    int a[20];
    int b[20];
    pp = pipe(fd);  //sakhte lole ba 2 khane khodesham por mikone, mikhaem az in addad hha estefade konim
    if(pp==-1){
        //lole sakhte nashode
        cout<<"create pipe failed"<<endl;
    }else{
        //success boode sakhte lole
        cout<<"ok"<<endl;
        pid = fork();
        if(pid>0){
            for(int i=0; i<20; i++){
                r = rand()%50;   // az 0 ta 49
                cout<<r<<endl;
                a[i]=r;
            }
            //0 bara khonda,  1 bara neveshtan
            write(fd[1],a,20*sizeof(int));
        }else if(pid ==0){
            read(fd[0],b,20*sizeof(int));
            for(int i=0; i<20; i++){
                if(b[i]%2==0){
                    //printf("%4d",b[i]);
                    cout<<b[i]<<endl;
                }
            }
        }
    }
    return 0;
}
