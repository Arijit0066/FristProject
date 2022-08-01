#include <stdio.h>

struct information
{
    int roll;
    char name[100];
    char subject[100];
};

int main()
{
    struct information info[6];
    int x;
    printf("\n");
    printf("\t\t\t-Developed By Arijit.\n");
    printf("Enter 1 for Student\n");
    printf("Enter 2 for Teacher\n");
    printf("Enter 3 for Staff\n");
    printf("Enter 4 for checking\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        FILE *fptr;
        fptr = fopen("StudenE.txt", "a");
        printf("Enter Roll = ");
        scanf("%d", &info[0].roll);
        printf("Enter Name = ");
        scanf("%s", info[0].name);
        // printf("\n");
        fprintf(fptr, "Roll = %d\n", info[0].roll);
        fprintf(fptr, "Student Name = %s\n", info[0].name);
        fprintf(fptr, "\n");
        printf("Okay It's Now Saved");
        fclose(fptr);
        break;
    case 2:
        FILE *ptr;
        ptr = fopen("SirE.txt", "a");
        printf("Hello Sir\n");
        printf("Enter Name = ");
        scanf("%s", &info[1].name);
        printf("Enter Subject = ");
        scanf("%s", &info[1].subject);
        fprintf(ptr, "Name = %s\n", info[1].name);
        fprintf(ptr, "Subject = %s\n", info[1].subject);
        fprintf(ptr, "\n");
        printf("Thank You %s Sir/Mam\n", info[1].name);
        printf("Okay It's Now Saved.");
        fclose(ptr);
        break;
    case 3:
        FILE *fptrS;
        fptrS = fopen("StaffE.txt", "a");
        printf("Enter Name = ");
        scanf("%s", &info[3].name);
        fprintf(fptrS, "Name = %s", info[3].name);
        fprintf(fptrS, "\n");
        printf("Thank You %s\n", info[3].name);
        printf("Okay It's Now Saved.");
        fclose(fptrS);
        break;
    case 4:
        int pass;
        int y = 10;
        char Name;
        while (y != 0)
        {
            printf("Enter Admin Password : ");
            scanf("%d", &pass);
            if (pass == 3411)
            {
                printf("LOGIN SUCCESSFULL\n");
                y = 0;
            }
            else
            {
                printf("Wrong Password\n");
            }
        }
        printf("\t\t\tChecking\n");
        printf("1 for Student \n");
        printf("2 for Teacher \n");
        printf("3 for Staff \n");
        scanf("%d", &x);
        // Next Switch
        switch (x)
        {
        case 1:
            FILE *fptr;
            fptr = fopen("StudenE.txt", "r");
            Name = fgetc(fptr);
            while (Name != EOF)
            {
                printf("%c", Name);
                Name = fgetc(fptr);
            }
            fclose(fptr);
            break;
        case 2:
            FILE *ptr;
            ptr = fopen("SirE.txt", "r");
            Name = fgetc(ptr);
            while (Name != EOF)
            {
                printf("%c", Name);
                Name = fgetc(ptr);
            }
            fclose(ptr);
            break;
        case 3:
            FILE *fptrS;
            fptrS = fopen("StaffE.txt", "r");
            Name = fgetc(fptrS);
            while (Name != EOF)
            {
                printf("%c", Name);
                Name = fgetc(fptrS);
            }
            fclose(fptrS);
            break;
            return 0;
        }
    }
}
