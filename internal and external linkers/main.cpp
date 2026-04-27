#include <iostream>

extern int g_x; 
extern int g_y;
extern const int g_z;

int main()
{
  std::cout << g_x;
  std::cout << g_y;
  std::cout << g_z;

}

//Scope determines where a variable is accessible. Duration determines when a variable is created and destroyed. 
//Linkage determines whether the variable can be exported to another file or not.

//Global variables have global scope (a.k.a. file scope), 
//which means they can be accessed from the point of declaration to the end of the file in which they are declared.

//Global variables have static duration, which means they are created when the program is started, and destroyed when it ends.

//Global variables can have either internal or external linkage, via the static and extern keywords respectively.