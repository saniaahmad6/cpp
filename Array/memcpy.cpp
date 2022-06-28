#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
  char str1[] = "Geeksss"; 
  char str2[] = "Quiz"; 
 
  puts("str1 before memcpy ");
  puts(str1);
 
  /* Copies contents of str2 to str1 */
  memcpy (str1, str2, sizeof(str2));
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 

    char csrc[100] = "Geeksfor";
    memcpy(csrc + 5, csrc, strlen(csrc) + 1);
    printf("%s  \n", csrc);
    char lol[100] = "Geeksfor";
    memmove(lol + 5, lol, strlen(lol) + 1);
    printf("%s", lol);
    cout<<endl;
    cout<<sizeof(unsigned int)<<endl;
    return 0;
  return 0;
}