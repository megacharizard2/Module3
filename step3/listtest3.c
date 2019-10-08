#include "list.h"
#include <stdint.h>
#include <stdio.h>

void fn(car_t* cp){
  if ((cp->price) > 800){
    printf("Match-price=%lf car=%s\n",cp->price,cp->plate);
  }
}

int main(){
  printf("applying function to empty list\n");
  lapply(&fn);
  printf("putting in 3 cars with prices 2000,3000,799\n");
  car_t car1={NULL,"9XL",2000.0,2000};
  car_t car2={NULL,"88L",3000.0,2000};
  car_t car3={NULL,"2XL",799.0,2000};
  lput(&car1);
  lput(&car2);
  lput(&car3);
  printf("putting in 3 cars with prices 2000,3000,799\n");
  printf("applying function to print cars with prices greater than 800\n");
  lapply(&fn);
}
