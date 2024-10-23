#include<stdio.h>
void traverse();

int main(){

    return 0;
}

void traverse() {
    if(ptr != NULL)
    {
        ptr->info = item;
        ptr = ptr->flink;

    }
    
}
void insertion() {
    if (ptr != NULL)
    {
        ptr->info = item;
        ptr = ptr->flink;
    }
    else {
        nptr = new node;
        nptr -> flink = NULL;
        nptr -> plink = ptr;
        ptr -> flink = nptr;
    }
    
}


