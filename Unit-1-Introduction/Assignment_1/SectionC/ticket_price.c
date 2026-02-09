#include <stdio.h>

void ticketCharge(int age, int day) {
    int price;
    if (age < 6) {
        printf("Child below 6 years is not allowed\n");
    }
    else {
        if (day == 1 || day == 7) {   
            if (age >= 60)
                price = 125;
            else if (age >= 12)
                price = 250;
            else
                price = 150;
        }
        else {                        
            if (age >= 60)
                price = 100;
            else if (age >= 12)
                price = 200;
            else
                price = 100;
        }

        printf("Ticket Charge = Rs. %d\n", price);
    }
}

int main() {
    int age, day;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter day (1=Sun, 2=Mon, ..., 7=Sat): ");
    scanf("%d", &day);

    ticketCharge(age, day);

    return 0;
}
