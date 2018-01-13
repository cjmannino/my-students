#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAXSTUDENTS 100
#define MAXFNAME 20
#define MAXLNAME 20
#define MAXAGE 99
#define MAXPHONE 11

#define MAXGRADE 100
#define MAXMAJOR 10

struct studentData
{
  char fname [MAXFNAME];
  char lname [MAXLNAME];
  int age [MAXAGE];
  int phone [MAXPHONE];
};

struct schoolData
{
  struct studentData instance [MAXSTUDENTS];
  int grade [MAXGRADE];
  char major [MAXMAJOR];
  char pass [2]; /* for booling pass or fail */

};
