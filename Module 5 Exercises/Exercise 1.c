#include <stdio.h>
#include <string.h>

struct student_details
{
    char name[30];
    char emailID[30];
    int mobile_no;
    int percentage;
};
struct department
{
    char dept_name[30];
    struct student_details student;
    int total_avg;
};

int main()
{
    int n;
    printf("Number of Inputs: ");
    scanf("%d",&n);
    struct department dept[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",dept[i].student.name);
        scanf("%s",dept[i].student.emailID);
        scanf("%d",&dept[i].student.mobile_no);
        scanf("%d",&dept[i].student.percentage);
        scanf("%s",dept[i].dept_name);
    }
    for(int i=0;i<n;i++)
    {
        dept[i].total_avg=0;
        if(strcmp(dept[i].dept_name,"IT"))
        {
            dept[i].total_avg+=dept[i].student.percentage;
        }
        if(strcmp(dept[i].dept_name,"ECE"))
        {
            dept[i].total_avg+=dept[i].student.percentage;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s - %d%%\n",dept[i].dept_name,dept[i].total_avg);
    }
    return 0;
}