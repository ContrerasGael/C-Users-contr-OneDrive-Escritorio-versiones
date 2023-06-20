#include <stdio.h>
int main ()
{
	int exponente;
	double d,y;
    printf("\n ceil (3.7)= %lf \t\t ceil (3.4)= %lf", ceil(3.7),ceil(3.4));
    printf("\n ceil (-3.7)= %lf \t\t ceil (-3.4)= %lf", ceil(-3.7),ceil(-3.4));
    printf("\n floor (3.7)= %lf \t\t ceil (3.4)= %lf", ceil(3.7),ceil(3.4));
    printf("\n floor (-3.7)= %lf \t\t ceil (-3.4)= %lf", ceil(-3.7),ceil(-3.4));
    printf("\n fmod (5.6,2.5)= %lf \t\t ceil (-5.6,2.5)= %lf", ceil(-5.6,2.5),ceil(3.4));
    d=frexp(16.0, &exente);
    d=modf(-17.365,&y);
    printf("\n Parte decimal de -17.365=%lf,d");
    printf("\n Parte entera de -17.365=%lf,y ")
    
    return 0;
    
    
}
