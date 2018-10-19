#include<stdio.h>
struct student
{
int roll;
int mark;
};
void main()
{
    struct student a[100];
    int i,n,b;
    printf("Enter the no. of student : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter details of student %d\n",i=i++);
        printf(" Roll Number : ");
        scanf("%d",&a[i].roll);
        printf(" Mark : ");
        scanf("%d",&a[i].mark);
    }
    printf("Enter Roll Number you want to search : ");
    scanf("%d",&b);
    for(i=1;i<=n;i++){
    if(a[i].roll==b)
    {
        break;
    }
    }
    if(i<=n)
    {
        printf("Marks : %d",a[i].mark);
    }
    else{
        printf("No student found");
    }
}
