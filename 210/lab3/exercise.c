#include<stdio.h>
int main(){
  unsigned x = 0x89ABCDEF;
  unsigned y = 0x76543210;
  // printf("0x%x\n", (x& 0xFF | (~x & ~0xFF)))
  printf("Should be 0x765432EF\n");
  unsigned lsbx = x & 0xFF;
  unsigned resty = y | 0xFF;
  printf("lsbx: 0x%x\n", lsbx);
  printf("resty 0x%x\n", resty);
  printf("Final: 0x%x\n", lsbx^resty);
}
