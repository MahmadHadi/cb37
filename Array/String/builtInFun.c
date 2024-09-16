#include <stdio.h>
#include <string.h>

int main() {

    // char name[] = "Hadi nayani ";
    char name[30];
    printf("Enter your name : ");
    gets(name);

    printf("sizeof = %d \n", sizeof(name));
    printf("strlen = %d \n", strlen(name));

    char userName[30];
    // userName = name; // ! error 

    // strcpy(userName, name);
    strcpy(userName, "nayani");
    puts(userName);

    char fname[] = "hadi ";
    char sname[] = "nayani";
    // "hadi nayani"
    
    strcat(fname, sname);
    printf("fname = %s \n", fname);

    char fullName[30];
    strcpy(fullName, fname);
    printf("fname = %s \n", fname);
    printf("sname = %s \n", sname);
    printf("fullname = %s \n", fullName);


    // https://www.geeksforgeeks.org/strcmp-in-c/
    int ans = strcmp("hadi", "hadi");
    printf("ans = %d \n", ans);

    ans = strcmp("hadi ", "Hadi ");
    printf("ans = %d \n", ans);
    
    ans = strcmp("Hadi ", "hadi ");
    printf("ans = %d \n", ans);

    strerror
    return 0;
}