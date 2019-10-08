#include "list.h"
#include <stdint.h>
#include <stdio.h>

int main(){
  printf("Getting from empty list\n");
  car_t* getfromempty=lget();
  if (getfromempty == NULL){
    printf("listisempty\n");
  }
  car_t firstcar={NULL,"9XL",2000,1998};
  car_t secondcar={NULL,"D9Z",999,2011};
  printf("Putting in firstcar with year 1998 and secondcar with year 2011\n");
  lput(&firstcar);
  lput(&secondcar);
  printf("Getting from list\n"); 
  car_t* getfromnonempty=lget();
  int yearofcar=getfromnonempty->year;
  printf("Year of car we got back is %d\n",yearofcar);
  
  
}
