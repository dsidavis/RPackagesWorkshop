#include <Rdefines.h>

SEXP
R_foo()
{
    SEXP ans;
    ans = NEW_INTEGER(1);
    INTEGER(ans)[0] = 10;
    return(ans);
}
