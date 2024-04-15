/*
 
Introduction of addresses in memory and pointers in C.
 
 
____________________________________________________________
 
Exercise #11: - Print position or address in memory of a variable.
 
 
1. Why is it interesting to learn the concept of pointers and addresses in memory?
 
- Understand how variables work
- Understand how memory assigns a position in memory
- Create programs that access an external program and change the values. HACK GAMES ON THE INTERNET
- Better understand how programming works
 
____________________________________________________________
 
2. In order to understand what pointers are, we first need to understand what the address in memory is:
 
Addresses in memory, it is the physical location of our variable value
____________________________________________________________
 
3. Complete the exercise explaining how to print the address in memory.
____________________________________________________________
 
4. What it is and how to create a pointer type variable: 

*/

#include <stdio.h>
 
int main()
{
    int edad = 11;
 
    // WHAT ARE MEMORY LOCATIONS -> ALSO CALLED ADDRESSES
 
    /* 0X7 | 0X12255 | PS3 | PS4 */
 
    // I WANT TO PRINT THE MEMORY ADDRESS WHERE THIS VALUE OF 10 IS STORED
    printf("\nMemory address of the variable EDAD: %p ", &edad);
 
 
    // OPTION 1 TO PRINT THE VALUES OF THE VARIABLE EDAD:
    printf("\nOption 1 to print the value of my variable edad: %i ", edad);
 
 
    // PRINT THE EXTRACTION OF WHAT IS FOUND IN ANOTHER VARIABLE
 
    // A POINTER EXTRACTS WHAT IS FOUND IN THE MEMORY LOCATION
 
    // CREATE POINTER VARIABLE
    int *p_edad;
 
    p_edad = &edad; // WE ALREADY HAVE OUR MEMORY ADDRESS STORED
 
    // PRINT THE POINTER
    printf("\nThe value of the pointer variable is: %i ", *p_edad);
 
    // IF WE ONLY PRINT THE VARIABLE  ITSELF, WE WILL GET THE POSITION IN MEMORY AND NOT THE VALUE OF THE VARIABLE
    //WITH THE POINTER WE POINT TO THE ADDRESS IN MEMORY AND OBTAIN THE VALUE OF THE VARIALE
    return 0;
}
