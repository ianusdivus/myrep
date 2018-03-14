#include <stdio.h>
#include <stdlib.h>

//function declaration
int isprime (n) {

// if n <= 1 the answer is no
  if (n<=1){
    return 0;
  }
  // count from 2 to n (exclusive), call it i
  for (int i=2;i<n;i++){
    //if n mod i equals 0 , return 0
    if (n%i == 0){
      return 0;}}
  return 1;}

int main (void) {
  if (isprime(17) == 1){
    printf ("entered number is prime");
  }
  else {
    printf ("entered number is NOT prime"); }
  return EXIT_SUCCESS;
}
