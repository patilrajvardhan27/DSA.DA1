#include <stdio.h>  
#include <string.h>  
  
#define max 100  
int top,stack[max];  
  
void push(char x){  
  
      // Push(Inserting Element in stack) operation  
      if(top == max-1){  
          printf("stack overflow");  
      }  else {  
          stack[++top]=x;  
      }  
  
}  
  
void pop(){  
    // Pop (Removing element from stack)  
      printf("%c",stack[top--]);  
}  


 int main()  
{  
   char str[]="Data Structure";  
   int len = strlen(str);  
   int i;  
    printf("Reg No - 21BCI0056\n");
  
   for(i=0;i<len;i++)  
        push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop();  
} 
