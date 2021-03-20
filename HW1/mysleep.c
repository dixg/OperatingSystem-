#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_alarm(int signo){
    (void)signo;
}

 int mysleep( int second){
    //Create sigaction structure New and old
    struct sigaction New,old;

    New.sa_flags = 0;
    New.sa_handler = sig_alarm;
    sigemptyset(&New.sa_mask);
    //Register signal processing function
    sigaction(SIGALRM, &New, &old);
    //Set the alarm
    alarm(second);   //Is there anything wrong here
    pause();
     int unslept = alarm(0);//Empty the alarm clock
    sigaction(SIGALRM, &old, NULL);//Restore the default signal processing action
    return unslept;
}

int main(){
    while(1){
        mysleep(2);
        printf("Hello, But I still have a BUG.\n");
    }
    return 0;
}