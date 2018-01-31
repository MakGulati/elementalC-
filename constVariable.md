With this statement we have set the integer weightGoal to 100. It cannot be changed during the program. If you want to change the value of weightGoal, you will have to edit the source code and recompile it.

const char *s;      // read as "s is a pointer to a char that is constant"
char c;
char *const t = &c; // read as "t is a constant pointer to a char"

*s = 'A'; // Can't do because the char is constant
s++;      // Can do because the pointer isn't constant
*t = 'A'; // Can do because the char isn't constant
t++;      // Can't do because the pointer is constant

main.cpp:10:16: error: assignment of read-only variable ‘weightGoal’
     weightGoal = 200; /* error message when tried to vary const variable */
