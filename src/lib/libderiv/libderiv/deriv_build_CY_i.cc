#include <libint/libint.h>
#include "libderiv.h"

void deriv_build_CY_i(prim_data *Data, const int ab_num, const int d_num, double *vp, const double *I0, const double *I1)
{
  const double twotzeta = Data->twozeta_c;
  const double *i0, *i1;
  int ab,d;

  for(ab=0;ab<ab_num;ab++) {
  i0 = I0 + 1*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) ;
  i0 = I0 + 3*d_num;
  i1 = I1;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 1.000000*(*(i1++));
  i0 = I0 + 4*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) ;
  i0 = I0 + 6*d_num;
  i1 = I1 + 1*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 2.000000*(*(i1++));
  i0 = I0 + 7*d_num;
  i1 = I1 + 2*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 1.000000*(*(i1++));
  i0 = I0 + 8*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) ;
  i0 = I0 + 10*d_num;
  i1 = I1 + 3*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 3.000000*(*(i1++));
  i0 = I0 + 11*d_num;
  i1 = I1 + 4*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 2.000000*(*(i1++));
  i0 = I0 + 12*d_num;
  i1 = I1 + 5*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 1.000000*(*(i1++));
  i0 = I0 + 13*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) ;
  i0 = I0 + 15*d_num;
  i1 = I1 + 6*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 4.000000*(*(i1++));
  i0 = I0 + 16*d_num;
  i1 = I1 + 7*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 3.000000*(*(i1++));
  i0 = I0 + 17*d_num;
  i1 = I1 + 8*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 2.000000*(*(i1++));
  i0 = I0 + 18*d_num;
  i1 = I1 + 9*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 1.000000*(*(i1++));
  i0 = I0 + 19*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) ;
  i0 = I0 + 21*d_num;
  i1 = I1 + 10*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 5.000000*(*(i1++));
  i0 = I0 + 22*d_num;
  i1 = I1 + 11*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 4.000000*(*(i1++));
  i0 = I0 + 23*d_num;
  i1 = I1 + 12*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 3.000000*(*(i1++));
  i0 = I0 + 24*d_num;
  i1 = I1 + 13*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 2.000000*(*(i1++));
  i0 = I0 + 25*d_num;
  i1 = I1 + 14*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 1.000000*(*(i1++));
  i0 = I0 + 26*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) ;
  i0 = I0 + 28*d_num;
  i1 = I1 + 15*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 6.000000*(*(i1++));
  i0 = I0 + 29*d_num;
  i1 = I1 + 16*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 5.000000*(*(i1++));
  i0 = I0 + 30*d_num;
  i1 = I1 + 17*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 4.000000*(*(i1++));
  i0 = I0 + 31*d_num;
  i1 = I1 + 18*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 3.000000*(*(i1++));
  i0 = I0 + 32*d_num;
  i1 = I1 + 19*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 2.000000*(*(i1++));
  i0 = I0 + 33*d_num;
  i1 = I1 + 20*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) - 1.000000*(*(i1++));
  i0 = I0 + 34*d_num;
  for(d=0;d<d_num;d++)
    *(vp++) = twotzeta*(*(i0++)) ;
  I0 += 36*d_num;  I1 += 21*d_num;
  }
}