#include<stdio.h>
#include<string.h>
struct employee
{
	char empname[15];
	int age;
	int empno;
	int salary;
};
int main()
{
	struct employee emp[20],*ptr;
	ptr=&emp[20];
    emp[20]={{"kaveri",32,1234567888,20000},
	{"priya",31,1234567887,18000},
	{"teja",32,1234567886,19000},
	{"uday",35,1234567885,25000},
	{"prasanna",30,1234567884,24000},
	{"kalyan",39,1234567883,22000},
	{"keerthi",28,1234567882,40000},
	{"dhruv",25,1234567881,35000},
	{"deekshitha",23,1234567880,26000},
	{"naina",27,1234567879,30000},
	{"vikas",26,1234567878,28000},
	{"sandeep",24,1234567877,39000},
	{"navya",23,1234567876,37000},
	{"santhosh",38,1234567875,33000},
	{"kiran",41,1234567874,24000},
	{"sanjeev",35,1234567873,40000},
	{"balu",30,1234567872,28000},
	{"sajith",33,1234567871,34000},
	{"poorni",28,1234567870,36000},
	{"ruhi",24,1234567869,28000}};
	printf("This program gives the details of 20 employees of an organisation\n");
	printf("employee_name\t  Age\t  Phoneno.\t  Salary\n");
	for(ptr=emp;ptr<emp+20;ptr++)
	{
		printf("%s\t  %d\t  %d\t  %d\n",ptr->empname,ptr->age,ptr->empno,ptr->salary);	
	}
printf("Thank you\n");
return 0;
}

