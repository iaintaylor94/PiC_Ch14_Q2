// Program to demonstrate the use of an enum to pass a value to a function

#include <stdio.h>

// Define enum "month"
enum months {
JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

// Declare Functions
char *monthName (enum months);

int main(void) {

  printf ("%s\n", monthName(JAN));
  printf ("%s\n", monthName(FEB));
  printf ("%s\n", monthName(MAR));
  printf ("%s\n", monthName(APR));
  printf ("%s\n", monthName(MAY));
  printf ("%s\n", monthName(JUN));
  printf ("%s\n", monthName(JUL));
  printf ("%s\n", monthName(AUG));
  printf ("%s\n", monthName(SEP));
  printf ("%s\n", monthName(OCT));
  printf ("%s\n", monthName(NOV));
  printf ("%s\n", monthName(DEC));
  
  return 0;
}

// Define Funcitons
char *monthName (enum months month) {
  switch (month) {
    case JAN :
      return "January";
      break;
    case FEB :
      return "February";
      break;
    case MAR :
      return "March";
      break;
    case APR :
      return "April";
      break;
    case MAY :
      return "May";
      break;
    case JUN :
      return "June";
      break;
    case JUL :
      return "July";
      break;
    case AUG :
      return "August";
      break;
    case SEP :
      return "September";
      break;
    case OCT :
      return "October";
      break;
    case NOV :
      return "November";
      break;
    case DEC :
      return "December";
      break;
    default :
      break;
  }
}