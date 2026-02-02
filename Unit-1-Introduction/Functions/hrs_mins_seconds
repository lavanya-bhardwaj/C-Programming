#include <stdio.h>
void convert_time(int sec)
{
    int hrs, mins, remsec;
    hrs=sec/3600;
    remsec=sec%3600;
    mins=remsec/60;
    remsec=remsec%60;
    
    printf("equivalent time: %d:%d:%d\n",hrs, mins, remsec);
}

int main()
{
    int sec;
    
    printf("enter number of seconds:");
    scanf("%d", &sec);
    
    convert_time(sec);
    
    return 0;
}
