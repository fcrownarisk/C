#if T
#include "S.ts"
#include "S.c"
#define J 1 kg*m*m/s*s
#define k  0.000000000000000013806485279 J/k
#define h 0.0000000000000000000000000662607015 J*s
#define c 277792458 m/s
#define PAI 3.1415926
#define T
#define M
void temperature(double c, double PAI, double G, double k){
   char T  temperature;
   T = h * c * c/16*PAI*PAI*G*k*M;
}
#endif