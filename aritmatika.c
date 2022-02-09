/* File         : aritmatika.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : 
   Operasi aritmatika bilangan integer dan bilangan riil :
   Menuliskan jumlah, hasil perkalian, pembagian, modulo
   dua buah variabel integer */
   
#include <stdio.h>
int main ()
{
    /* KAMUS */
    int x = 5;
    int y = 8;
    
    /* PROGRAM */
    printf ("Ini nilai x + y : %d \n", x+y );
    printf ("Ini nilai x - y : %d \n", x-y );
    printf ("Ini nilai x * y : %d \n", x*y );
    printf ("Ini nilai x / y : %d \n", x/y );
    printf ("Ini nilai y / x : %d \n", y/x );
    printf ("Ini nilai x mod y : %d \n", x%y );
    
    /* bandingkan dengan operasi pembagian bilangan rill */
    float a = 5, b = 8;
    printf ("Ini nilai a / b : %5.2f \n", a/b );
    printf ("Ini nilai b / a : %5.2f \n", b/a );
    
    return 0;
}
