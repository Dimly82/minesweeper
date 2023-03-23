#include <stdio.h>
#include <stdlib.h>

void CheckErr(int code) {
  if (code < 0) {
    switch (code){
      case -1: {
        printf("You entered wrong difficulty.\nExploding your PC...");
        exit(-1);
      }
    }
  }
}