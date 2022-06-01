#include <stdio.h>

int main()

 {

unsigned char x = 20, y = 21; // x = 20 (00010100), y = 21 (00010101)

int g = 0;

   g = x & y; /* 20 = 010100 */

   printf(” The result of Bitwise AND is %d \n”, g );

   g = x | y; /* 21 = 010101 */

   printf(” The result of Bitwise OR is %d \n”, g );

   g = x ^ y; /* 1 = 0001 */

   printf(” The result of Bitwise XOR is %d \n”, g );

   g = ~x;

   printf(” The result of Bitwise NOT is %d \n”, g );

   g = x << 1;

   printf(” The result of Bitwise Left Shift is %d \n”, g );

   g = x >> 1;

   printf(” The result of Bitwise Right Shift is %d \n”, g );

return 0;

}
