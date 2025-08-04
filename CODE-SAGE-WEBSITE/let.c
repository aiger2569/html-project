#include <stdio.h>
/*to understand the calling convention*/
int main(void){
    int a ,ch=0;
    printf(
     "the given number to check : "
    );
    scanf( "%d",&a);
      for(int i=2;i<=a/2;i++){
        if(a%i==0){
           ch=1;
         break;
        }
        
    }
    if(a==1){
        printf("the given number is not prime");
    }
    else{
  
   if(ch==0){
    printf(
        "the given number is prime"
    );}
    else{
     printf("the given number is not a prime");
}
}
}
