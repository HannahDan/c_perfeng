#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>


int main(void)
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    wchar_t exp = 0;

    for( count=0; count <= 1000000; count++) 
    {
     iswgraph(exp);
      exp++;
    }

    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("iswgraph took %6.6f\n", secs);
}
