#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
     
  int max = atoi(argv[1]);
    
  for (int i = 0; i <= max; i++){
    for (int j = 0; j <= max; j++){
      if (i == 0 && j == 0) printf("%3c",' ');
      else if (i == 0) printf("%5d",j);
      else if (j == 0) printf("%4d",i);
      else printf("%4d ", i*j);
     }
     printf("\n");
  }
}
