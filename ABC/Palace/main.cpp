#include <cstdio>
int N ,T ,A , X ;
int main ()
{
scanf ("%d %d %d " ,&N ,& T ,& A );
int res =0;
int cc =1 <<30;
for ( int i =1; i <= N ; i++)
{
scanf ("%d " ,& X );
int d =( T *1000 - X *6) - A *1000;
if (d <0) d = - d ;
if ( cc > d ) cc =d , res = i ;
}
printf ("% d\n " , res );
}