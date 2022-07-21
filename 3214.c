#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sec;
    scanf("%d", &sec);

    int days = sec/86400;
    sec %= 86400;
    int hours = sec/3600;
    sec %= 3600;
    int min = sec /60;
    sec = sec%60;

    printf("%d\n%d\n%d\n%d\n",days, hours, min, sec);

	return 0;
}