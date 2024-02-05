#include<stdio.h>                         // header decleration
 

int main(){
   int num;                          // veriabel decleration
   printf("Enter the percentage:");  //print "statement"
  
   scanf("%d",&num);                //read number from user      
  
   if (num<=100&&num>=91)             //check case1
   {
       printf("The Grade is A");       //Print Statment
   }
   
  else if (num<=90&&num>=71)           //check case 2
   {
       printf("The Grade is B");
   }
   
  else if (num<=70&&num>=51)            // check case 2
   {
       printf("The Grade is C");
   }
  else if (num<=50&&num>=0)              //check case 3
   {
       printf("The Grade is F");
       
   }
    else{                                // check -3final case
       printf("Error : Please enter the percentage Less than or equal to 100. ");
   }
}
