#include <stdio.h>
#define sizeOfDepartment 3
#define sizeOfEmployee 5

int main()
{
    // 3 Department - 5 Employees
    int salaries[sizeOfDepartment][sizeOfEmployee] = {0};
    int choice;
    do
    {
        printf("Program to [enter OR display] salary of employees\n");
        printf("-------------------------------------------------\n");
        printf("1) Enter Salary\n");
        printf("2) Display Salary\n");
        printf("Please Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            int department, employee;


        case 1:
            for(department = 0; department < sizeOfDepartment; department++)
            {
                printf("\nDepartment #%d", department + 1);
                printf("\n-------------\n");
                for(employee = 0; employee < sizeOfEmployee; employee++)
                {
                    printf("Salary OF Employee#%d: ", employee + 1);
                    scanf("%d", &salaries[department][employee]);
                }
                printf("::::FINISHED::::\n");
            }
            break;


        case 2:
            for(department = 0; department < sizeOfDepartment; department++)
            {
                printf("\nDepartment #%d", department + 1);
                printf("\n-------------\n");
                for(employee = 0; employee < sizeOfEmployee; employee++)
                {
                    printf("Salary OF Employee#%d: %d\n", employee + 1, salaries[department][employee]);
                }
                printf("::::FINISHED::::\n");
            }
            break;
        }

        printf("\n");
        printf("1) Back To Home.\n");
        printf("2) Exit.\n");
        printf("Please Enter Your Choice: ");
        scanf("%d", &choice);
        printf("\n");
    }while(choice == 1);

    return 0;
}
