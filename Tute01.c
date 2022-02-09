/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  //variable declaration
  float x , y ;
  float avg ;

  //get input from the user
  printf( "Enter subject 1 marks : " ) ;
  scanf( "%f" , &x ) ;

  printf( "Enter subject 2 marks : " ) ;
  scanf( "%f" , &y ) ;

  //Calculating Average
  avg = (x + y) / 2 ;

  //print Average
  printf( "Average of the two marks : %.2f" , avg ) ;

  return 0 ;
}

