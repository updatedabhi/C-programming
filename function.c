#include <stdio.h>

// function prototype
void robot();
void moveStraight();
void moveLeft();
void moveRight();

int main()
{
    char button;
    printf("Press the circumflex button for robot help\n");

    scanf("%c", &button);

    if (button == '^')
    {
        // function call
        robot();
        moveStraight();
        moveLeft();
        moveRight();
        moveStraight();
        printf("Write down your order whatever you want to buy for your master\n");
    }
    else {
        printf("Invalid input\n");
        moveLeft();
    }

    return 0;
}

// function defination
void robot()
{
    printf("okay I am ready to go to market\n");
}

void moveStraight() {

    printf("Go to straight\n");

}

void moveRight() {

    printf("Just move right\n");

}

void moveLeft() {

    printf("move left too\n");
    moveStraight();

}
