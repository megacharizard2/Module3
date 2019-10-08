#include "queue.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fn(void* element){
  char* string=(char*)element;
  if (strcmp(string,"Hello")==0){
    printf("found it\n"); 
  }
  else{
    printf("Not it\n");
  }
}

bool searchfn(void* elementp,const void* keyp){
  if (strcmp(elementp,keyp) == 0){
    printf("Match in searchfunction\n");
    return true;
  }
  return false;

}
int main(){
  queue_t* queue=NULL;
  char* wo="Hello";
  int32_t returncod=qput(queue,wo);
  printf("return cod %d\n",returncod);
  queue=qopen();
  if (queue == NULL){
    printf("queue is NULL\n");
  }
  char* returned=qget(queue);
  if (returned == NULL){
     printf("NULL returned");
  }
  char* word="Hello";
  int32_t returncode=qput(queue,word);
  printf("return code %d\n",returncode);
  char* returnedword=qget(queue);
  printf("returnedword =%s\n",returnedword);
  char* word2="Bello";
  int32_t returncode2=qput(queue,word2);
  printf("return code2 %d\n",returncode2);
  char* returnedwordqremove=qremove(queue,&searchfn,word2);
  printf("rturened word from qremove is %s\n",returnedwordqremove);
  qsearch(queue,&searchfn,word2);
  qapply(queue,&fn);
  char* returnedword2=qget(queue);
  if (returnedword2 == NULL){
    printf("returned word is NULL");
  }
  printf("returnedword2 =%s\n",returnedword2);
  qput(queue,word);
  queue_t* queue2=qopen();
  char* wordnew="ZELLE";
  qput(queue2,wordnew);
  qconcat(queue,queue2);
  queue2=NULL;
  char* searchword=qremove(queue,searchfn,wordnew);
  printf("Got back word %s\n",searchword);
  char* firstword=qget(queue);
  char* secondword=qget(queue);
  char* thirdword=qget(queue);
  printf("%s %s %s\n",firstword,secondword,thirdword);
  qclose(queue);
}
