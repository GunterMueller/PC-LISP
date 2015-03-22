/* EDITION AB01, APFUN MR.68 (90/04/18 09:24:00) -- CLOSED */                   
/* --- */

/*
 | PC-LISP (C) 1984-1989 Peter J.Ashwood-Smith
 */
#include <stdio.h>
#include <math.h>
#include "lisp.h"

/*************************************************************************
 ** busin :Returns the sine  of the single double parameter.            **
 *************************************************************************/
struct conscell *busin(form)
struct conscell *form;
{      double f;
       if ((form != NULL)&&(form->cdrp == NULL))
          if (GetFloat(form->carp,&f))
              return(newrealop(sin(f)));
       ierror("sin");
}