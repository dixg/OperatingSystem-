#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_alarm(int signo){
printf("In the signal handler\n");
    (void)signo;
}

 int mysleep( int second){
   
    struct sigaction New,old;

    New.sa_flags = 0;
    New.sa_handler = sig_alarm;


    sigemptyset(&New.sa_mask); // clears the sa_mask. All signals will be recieved and no mask https://stackoverflow.com/questions/20684290/signal-handling-and-sigemptyset/20684881
    
    sigaction(SIGALRM, &New, &old); // If SIGALRM is recieved function handling new will be called 
   
    alarm(second);   // after `second` seconds send a SIGALRM interrupt. Returns  instantaneously
    
    pause(); // Waits indefinitely. But since we have added a sigaction call on SIGALRM and an alarm will fire in `second` seconds this will be interrupted in `second` seconds
 }

int main(){
  
        mysleep(2);
        printf("It's working!! \n");

 mysleep(10);
        printf("@@@! \n");

    return 0;
}