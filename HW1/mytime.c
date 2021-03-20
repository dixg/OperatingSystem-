#include <stdio.h> 
#include <unistd.h> 
#include <time.h>
#include <string.h>
#include <stdlib.h>


int main( int argc, char *argv[] ){

   
    
    char str1[10], str2[10],str3[100],word[10];

    int total_argc= argc;
    // printf("!!!!! total_argc = %d \n", total_argc);

    for (int i = 1; i < total_argc; i++)
    {
         printf("-->argv[%d] = %s  \n",i, argv[i]);
         int command_len =strlen(argv[i]);

         for(int j=0; j < command_len ;j++){
                str3[j]= argv[i][j];
        }
        str3[command_len]= ' ';
         printf("string = %s\n", str3);
         strcat(word,str3);
  
    printf("strcopy = %s\n", word);
      
   }
   printf("command string = %s\n", word);
    
    clock_t start = clock(); 
    fork();
    system(word);
    clock_t stop = clock();

   double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f \n", elapsed);

}