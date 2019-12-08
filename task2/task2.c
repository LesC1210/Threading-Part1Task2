#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
void add(int a, int b);
void sub(int a, int b);
void mult(int a, int b);
void divide(int a, int b);
void exitProg(int a, int b);


int main (void) {
	/* IMPLEMENT ME: Insert your algorithm here */
  int input;
  int a = 9;
  int b = 4;
  
  printf("Choose an operation. (0=add, 1=subtract, 2=Multiply, 3=divide, 4=exit):");
  scanf("%d", &input);
  
  void (*func_ptr_arr[])(int,int) = {add, sub, mult, divide, exitProg};
  
  
  while (input != 4){
    for (int i = 0; i == input; i++){
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 1; i == input; i++){
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 2; i == input; i++){
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 3; i == input; i++){
      (*func_ptr_arr[input])(a,b);
    }
    
    printf("Choose an operation. (0=add, 1=subtract, 2=Multiply, 3=divide, 4=exit):");
    scanf("%d", &input);
  }
  
  for(int i = 4; i == input; i++){
    (*func_ptr_arr[input])(a,b);
  }
    
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
void add(int a, int b){ 
  printf("a + b = %d\n", a+b);  
}
void sub(int a, int b){ 
  printf ("a - b = %d\n", a-b);  
}
void mult(int a, int b){ 
  printf ("a * b = %d\n", a*b);  
}
void divide(int a, int b){ 
  printf ("a / b = %d\n", a/b);  
}
void exitProg(int a, int b){ 
  printf ("Exiting program"); 
  exit(0); 
}

