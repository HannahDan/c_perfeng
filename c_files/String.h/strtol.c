#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
     const char *p = "10 200000000000000000000000000000 30 -40 junk";
    char *end;
    for( count=0; count <= 1000000; count++) {
    strtol(p, &end, 10);
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strtol took %6.9f\n", secs);
    
}
