#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main(){
    pid_t pid; //variable to store process id
    pid_t ppid; //variable to store parent process id

    sleep(5);

    pid = getpid(); // returns pid
    ppid = getppid(); //returns parent pid

    printf("The process id is : %d\n" , pid);
    printf("The parent of process id is : %d\n" , ppid);
}
