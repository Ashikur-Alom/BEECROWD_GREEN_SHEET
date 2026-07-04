#include <stdio.h>

int main() {
int day1, hour1, minute1, second1;
int day2, hour2, minute2, second2;
char ch[10];

scanf("%s %d", ch, &day1);
scanf("%d %s %d %s %d", &hour1, ch, &minute1, ch, &second1);
scanf("%s %d", ch, &day2);
scanf("%d %s %d %s %d", &hour2, ch, &minute2, ch, &second2);

int second=second2-second1;
int minute=minute2-minute1;
int hour=hour2-hour1;
int day=day2-day1;

if(second<0) {
    second+=60;
    minute--;
}
if(minute<0) {
    minute+=60;
    hour--;
}
if(hour<0) {
    hour+=24;
    day--;
}

printf("%d dia(s)\n", day);
printf("%d hora(s)\n", hour);
printf("%d minuto(s)\n", minute);
printf("%d segundo(s)\n", second);

    return 0;
}
