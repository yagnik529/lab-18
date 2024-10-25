// #include <stdio.h>

// struct Student
// {
//     int roll_no;
//     char name[50];
//     int chem_marks;
//     int maths_marks;
//     int phy_marks;
// };

// int main()
// {
//     struct Student students[5];
//     float totalMarks, percentage;

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter details of Student %d:\n", i + 1);
//         printf("Roll no => ");
//         scanf("%d", &students[i].roll_no);
//         printf("Name => ");
//         scanf(" %[^\n]s", students[i].name);
//         printf("Chemistry => ");
//         scanf("%d", &students[i].chem_marks);
//         printf("Mathematics => ");
//         scanf("%d", &students[i].maths_marks);
//         printf("Physics => ");
//         scanf("%d", &students[i].phy_marks);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         totalMarks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
//         percentage = (totalMarks / 300) * 100;

//         printf("%s (%d)\n", students[i].name, students[i].roll_no);
//         printf("Chemistry => %d\n", students[i].chem_marks);
//         printf("Mathematics => %d\n", students[i].maths_marks);
//         printf("Physics => %d\n", students[i].phy_marks);
//         printf("Total => %.0f/300\n", totalMarks);
//         printf("Percent => %.2f%%\n", percentage);
//     }
// }

#include <stdio.h>

int main()
{
    FILE *p1;
    FILE *p2;

    // Open the files in write mode and check for success
    p1 = fopen("odd.txt", "a");
    p2 = fopen("evan.txt", "a");
    if (p1 == NULL || p2 == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Loop through the range and write to the appropriate files
    for (int i = 50; i <= 70; i++)
    {
        char buffer[10];
        sprintf(buffer, "%d\n", i); // Convert integer to string format

        if (i % 2 != 0)
        {
            fputs(buffer, p1); // Write odd number to odd.txt
        }
        else
        {
            fputs(buffer, p2); // Write even number to evan.txt
        }
    }

    // Close files
    fclose(p1);
    fclose(p2);

    return 0;
}
