#include<stdio.h>
int diplomaAverage();
int matricAverage();
int bscAverage();

int main(){
    char q[10];
    printf("Write your qualification: \n");
    scanf("%c", &q);
    if (q == "diploma")
    {
        diplomaAverage();
    }
    else if (q == "matric")
    {
        matricAverage();
    }
    else {
        bscAverage();
    }
    
    
    return 0;
}

int diplomaAverage() {
    int D, A, C, M, S;
    printf("Enter your diploma marks");
    scanf("%d%d%d%d%d", &D, &A, &C, &M, &S);
    printf("%d", (D + A + C + M + S) / 5);
}

int matricAverage() {
    int E, Ma, Hi, So, Si;
    printf("Enter your diploma marks");
    scanf("%d%d%d%d%d", &E, &Ma, &Hi, &So, &Si);
    printf("%d", (E + Ma + Hi + So + Si) / 5);
}

int bscAverage() {
    int gk, rs, mt;
    scanf("%d%d%d", &gk, &rs, &mt);
    printf("%d", (gk + rs + mt) / 3);
}