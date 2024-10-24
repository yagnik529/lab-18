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
#include <string.h>

void main()
{
    FILE *p1;
    FILE *p2;

    p1 = fopen("odd.txt", "a");
    p2 = fopen("evan.txt", "a");

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 != 0)
        {
            char odd[100];
            odd[i] = i;
            fputs(odd, p1);
        }
        else
        {
            char evan[100];
            evan[i] = i;
            fputs(evan, p2);
        }
    }
}