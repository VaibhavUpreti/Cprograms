#include <stdio.h>
int main() {
    int dd,mm,yy;
    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);

   // leap year if perfectly divisible by 400
    if (yy % 400 == 0) {
        printf("%d is a leap year.", yy);
    }
   // not a leap year if divisible by 100 but not divisible by 400
    else if (yy % 100 == 0) {
        printf("%d is not a leap year.", yy);
    }
   // leap year if not divisible by 100 but divisible by 4
    else if (yy % 4 == 0) {
        printf("%d is a leap year.", yy);
    }
   // Not leap years
    else {
        printf("%d is not a leap year.", yy);
    }

    return 0;
}   