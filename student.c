/********Student-Data-Base********/
/********By:Carl J Mannino********/
/********cmannino@mac.com*********/
/**Compile with studentBETA.h****/
#include "studentBeta.h"

void intDisplay ( void );





int main(int argc, char const *argv[])
{
system ("clear");
int * ptr;

/*Function Calls */
intDisplay ();

}// END OF main

void intDisplay ( void )
{
  char intro [420];
  char ch;
  FILE *fp;
  fp = fopen ("intro.txt", "r");
  while ((ch = getc(fp)) != EOF)
  {
    putchar(ch);
  }
    if (!fp)
  {
      puts ("Program Error! Bye!");
      exit (EXIT_FAILURE);
  }

      while ( fgets ( intro, 20, fp)!= NULL)
      printf ("%s", intro);
      if(fclose (fp)!= 0)
      {
        fprintf (stderr, "Error closing file\n");
        exit (EXIT_FAILURE);
      }

} // END OF intDisplay
