#include <stdio.h>

struct date_time
{
	unsigned int hours:10;
	unsigned int minutes:10;
	unsigned int seconds:10;
	unsigned int day:10;
	unsigned int month:10;
	unsigned int year:11;
};


int main()
{
    struct date_time t;
    unsigned int temp;
    printf("Enter the value for hour: ");
    scanf("%u",&temp);
    t.hours=temp;
    printf("Enter the value for minutes: ");
    scanf("%u",&temp);
    t.minutes=temp;
    printf("Enter the value for seconds: ");
    scanf("%u",&temp);
    t.seconds=temp;
    printf("Enter the value for day: ");
    scanf("%u",&temp);
    t.day=temp;
    printf("Enter the value for month: ");
    scanf("%u",&temp);
    t.month=temp;
    printf("Enter the value for year: ");
    scanf("%u",&temp);
    t.year=temp;
    printf("\n\nThe time is(hh:mm:ss):\n");
    printf("\t%u:%u:%u",t.hours,t.minutes,t.seconds);
    printf("\n\nThe date is:\n");
    printf("\t%u/%u/%u",t.day,t.month,t.year);
    printf("\n\nThe total size of the structure is: %ld",sizeof(t));
    return 0;
}