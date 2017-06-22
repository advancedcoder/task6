#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <string.h>

struct Students
{
	char name[30];
	int mark1, mark2, mark3, mark4, mark5;
}student;

FILE *studentsdata;

void studentlist();
/*void exelentgrades();
void glebagrades();
void ashkargrades();*/

void studentlist()
{
	char *name;
	if (!fopen("students.txt", "r")) {
		printf("Error!\n");
		return;
	}
	studentsdata = fopen("students.txt", "r");
	while (!feof(studentsdata)) {
		fgets(student.name, 30, studentsdata);
		name = strtok(student.name, ":");	
		printf("%s\n", student.name);
	}
}

int main()
{
	setlocale(LC_CTYPE, "Rus");
	for (;;)
	{
		int menu1;
		printf("|***********************************************************|\n"
			"|                Введите номер с меню ниже                  |\n"
			"|***********************************************************|\n"
			"|1-Список студентов                                         |\n"
			"|2-Список студентов которые сдали все экзамены только на 5  |\n"
			"|3-Список студентов которые имеют 3                         |\n"
			"|4-Список студентов которые имеют 2                         |\n"
			"|5-Выход                                                    |\n"
			"|***********************************************************|\n");
		printf(">>");
		scanf("%i", &menu1);
		system("cls");
		switch (menu1)
		{
		case 1:studentlist();
			break;
		case 2: //exelentgrades();
			break;
		case 3://glebagrades();
			break;
		case 4://ashkargrades();
			break;
		case 5: break;
		default: printf("Error!\n");
		}
		return 0;
	}
}
	