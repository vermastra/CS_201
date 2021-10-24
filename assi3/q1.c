// To generate unique hash value we can use asci values of different different characters. Since the asci value for each 
// character is unique, so their combination will also give an unique hash value.
#include <stdio.h>

#define MAX 200

long long int hashing(char input[MAX]) {

  long long int hashvalue = 0;
  for(int i = 0; i<MAX && input[i]!='\0'; i++) {
    hashvalue+=(i+1)*input[i];
  }
  return hashvalue;
}

int main() {

  char input[MAX] = {0};

  scanf("%[^\n]", input);

  printf("%lld\n", hashing(input));

  return 0;
}