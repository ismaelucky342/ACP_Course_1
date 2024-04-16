/*
 
Introduction to processes and windows
 
Exercise #14: Create a program that searches for a process or window that is being executed, returning its ID number.
 
The program must wait for a key to be pressed to perform the search and print the result.
 
- Brief explanation of the term DWORD
- Brief explanation of an ID number of a program that is being executed
 
DWORD -> is another type of variable
pid -> id number of our process -> RANDOM NUMBER
 
\n
 
*/

#include <stdio.h>
#include <windows.h>
#define letter_a 97
 
// PROTOTYPES
void detect_process();
 
// GLOBAL VARIABLES
char window_name[20] = "Anki - User 1";
DWORD pid; // VARIABLE THAT WILL CONTAIN THE PROCESS ID NUMBER OF OUR PROGRAM
 
void main()
{
    char letter;
    
    while(1)
    {
        letter = getch(); //WE PREVENT THE PROGRAM FROM CLOSING
        Sleep(1000); // INTERVAL SO IT IS NOT SO SLOW
        
        // CONDITIONAL IF YOU PRESS THE LETTER A, WE CALL THE FUNCTION
        if (letter==letter_a)
        {
        // WE CALL FUNCTION
        detect_process();
        }
    }
}
 

void detect_process()
{
 
    // WE LOOK FOR THE WINDOW - NEW TYPE OF VARIABLE "HWND"
    HWND find_window = FindWindow(NULL,(window_name)); // RETURN TRUE OR FALSE
    
    // GET THE PID FROM OUR WINDOW AND STORE IT IN OUR DWORD TYPE VARIABLE CALLED PID
    GetWindowThreadProcessId(find_window,&pid);
 
    // WE ASK IF THE WINDOW WAS FOUND
    if (find_window) // 1
    {
    printf("\nProgram %s is being executed with pid %i ", window_name , pid);
    }
    else
    {
    // IT WAS NOT FOUND
    printf("\nProgram %s not found ", window_name);
    }
    
}