#ifndef _OPTIONS_H_
#define _OPTIONS_H_

#include <stdbool.h>
#include "opt_parse.tab.h"

#define COUNT_OF(x) (sizeof(x)/sizeof(x[0]))

struct conf_opt_t {
  bool configured; // is present in configuration file
  int  ndash;      // 1 or 2 dashes
  enum yytokentype type; // option type token
  char name[32]; 
  char value[PATH_MAX];
};

struct warn_opt_t {
  bool configured;       // is present in configuration file
  bool yn;               // on or off
  enum yytokentype type; // warning type token
  char name[32]; 
};

bool option_set( enum yytokentype type, const char name[], const char value[] );
bool warning_set( enum yytokentype type, bool yn, const char name[] );

#endif
