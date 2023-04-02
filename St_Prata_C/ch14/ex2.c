#include <stdio.h>
#include <time.h>

void input(int *, int *, int *);

int main(void) {
    int day, month, year;
    struct tm start, now;


    input(&day, &month, &year);

    start.tm_sec = 0;
    start.tm_min = 0;
    start.tm_hour = 0;
    start.tm_mday = 0;
    start.tm_mon = 0;
    start.tm_year = year;

    now.tm_sec = 0;
    now.tm_min = 0;
    now.tm_hour = 0;
    now.tm_mday = day;
    now.tm_mon = month - 1;
    now.tm_year = year;

    long m_start = mktime(&start);
    long m_now = mktime(&now);

    int res = m_now - m_start;

    printf("days since start year%d", res/60/60/24);

    return (0);
}


void input(int *day, int *month, int *year) {
    printf("Input time in format: day month year\n");
    scanf("%d %d %d", day, month, year);
}
