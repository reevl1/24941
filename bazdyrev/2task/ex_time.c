#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *sp;

    time(&now);
    sp = gmtime(&now);
    sp->tm_hour -= 8;
    mktime(sp);

    printf("//- Время в Калифорнии: %02d:%02d / День: %02d/%02d -//\n",
           sp->tm_hour, sp->tm_min, sp->tm_mday, sp->tm_mon+1);
}
