#include <stdio.h>
#include <stdlib.h>
struct Student
{
int rollno;
char name[30];
char branch[20];
};
void addRecord()
{
struct Student s;
FILE *fp = fopen("students.dat", "ab");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
printf("Enter Roll No: ");
scanf("%d", &s.rollno);
printf("Enter Name: ");
scanf("%s", s.name);
printf("Enter Branch: ");
scanf("%s", s.branch);
fwrite(&s,sizeof(s), 1, fp);
fclose(fp);
printf("Record added successfully!\n");
}
void displayRecords()
{
struct Student s;
FILE *fp = fopen("students.dat", "rb");
if (fp == NULL)
{
printf("No recordsfound!\n");
return;
}
printf("\nRollNo\tName\tBranch\n");
while (fread(&s, sizeof(s), 1, fp) == 1)
printf("%d\t%s\t%s\n", s.rollno, s.name, s.branch);
fclose(fp);
}
void searchRecord()
{
struct Student s;
int key, found = 0;
FILE *fp = fopen("students.dat", "rb");
if (fp == NULL)
{
printf("No recordsfound!\n");
return;
}
printf("Enter Roll No to search: ");
scanf("%d", &key);
while (fread(&s, sizeof(s), 1, fp) == 1)
{
if (s.rollno == key)
{
printf("Record Found -> RollNo: %d, Name: %s, Branch: %s\n",
s.rollno, s.name, s.branch);
found = 1;
break;
}
}
if (!found)
printf("Record not found!\n");
fclose(fp);
}
int main()
{
int choice;
do
{
printf("\n1. Add Record\n");
printf("2. Display Records\n");
printf("3. Search Record\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
addRecord();
break;
case 2:
displayRecords();
break;
case 3:
searchRecord();
break;
case 4:
printf("Exiting...\n");
break;
default:
printf("Invalid choice!\n");
}
} while (choice != 4);
return 0;
}
