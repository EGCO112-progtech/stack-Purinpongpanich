#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

int main(int argc, char **argv){
  
  int i,flag1=0,flag2=0,flag3=0,j,count=0;
  Stack s;
  s.top=NULL;
  s.size=0;

  for(i=1;i<argc;i++){
     for(j=0;j<strlen(argv[i]);j++){
       switch(argv[i][j]){
         case '{' :
         case '[' :
            push(&s,argv[i][j]);
            flag1 = 1;
            break;
         case '}' : 
           flag2 = 1;
           if(pop(&s) != '{'){
             flag3 = 1;
           }
           break;
         case ']' :
           flag2 = 1;
           if(pop(&s) != '['){
             flag3 = 1;
             
           }
           break;  
       }
     }
     if(flag1 == 1 && flag2 == 1 && flag3 != 1 && (strlen(argv[i]) % 2) == 0){
       printf("argv %d correct\n",i);
     }
     else if(flag1 == 1 && flag2 == 1 && flag3 == 1 && (strlen(argv[i]) % 2) == 0){
       printf("argv %d incorrect: mismatch\n",i);
     }
     else if(flag1 == 1 && (flag2 == 0 || flag3 == 0) ){
       printf("argv %d incorrect: too many open parenthesis\n",i);
     }
     else{
       printf("argv %d incorrect: too many closed parenthesis\n",i);
     }
     flag1 = 0;
     flag2 = 0;
     flag3 = 0;
     count = 0;
     pop_all(&s);
  }
   return 0;
}
