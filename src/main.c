#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "my_include.h"
#include "file.h"

int main(int agrc,char*argv[])
{

  printf("main %s\n",argv[0]);
  file_open("pippo.txt");

return 0;
}
