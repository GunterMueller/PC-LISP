

/*
 | PC-LISP (C) 1984-1989 Peter J.Ashwood-Smith
 */
#include <stdio.h>
#include <math.h>
#include "lisp.h"

/*************************************************************************
 ** buexit: Just exit the lisp interpreter. Takes no parameters. In the **
 ** embedded programming language version of the interpreter exit is not**
 ** permitted. Control must return to the application to exit.          **
 *************************************************************************/
struct conscell *buexit(form)
struct conscell *form;
{      if (form == NULL)
#         if !MACRO
             exit(0);
#         else
             gerror("exit not supported");
#         endif
       ierror("exit");  /*  doesn't return  */
       return NULL;   /*  keep compiler happy  */
}
