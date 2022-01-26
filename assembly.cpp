//g++ -g -O0 -Wa,-aslh assembly.cpp
#include <stdio.h>
int main()
{
  int x;
  int y;
  int z;
  x = 3;
  y = 5;
  z = x + y;
  printf(": %d\n", x);
  return 0;
}
//Q4 Ans:
//The given program was run using the above command. The output recieved was the code in assembly language. This is an intermediate product between the C++ code and the binary file produced during compilation.
