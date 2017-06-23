#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <string.h>

char string[30]; //строка, которая считывается с этого самого
char *name;

FILE *studentsdata;

void studentlist();
//void exelentgrades();
//void glebagrades();
void ashkargrades();

void studentlist()
{
	if (!fopen("students.txt", "r")) {
		printf("Error!\n");
		return;
	}
	studentsdata = fopen("students.txt", "r");
	while (!feof(studentsdata)) {
		fgets(string, 30, studentsdata);
		name = strtok(string, ":");	
		printf("%s\n", name);
	}
	fclose(studentsdata);
}

void ashkargrades()
{
	char *marks;
	int k = 0;
	if (!fopen("students.txt", "r")) {
		printf("Error!\n");
		return;
	}
	studentsdata = fopen("students.txt", "r");
	while (!feof(studentsdata)) {
		fgets(string, 30, studentsdata);
		name = strtok(string, ":");
		marks = strtok(NULL, " ");
		while (marks != NULL) {
			if (!strcmp(marks,"2"))
				k++;
			marks = strtok(NULL, " ");
		}
		if (k == 1)
			printf("%s\n", name);	
		k = 0;
	}
	fclose(studentsdata);
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
		case 1: studentlist();
			break;
		case 2: //exelentgrades();
			break;
		case 3://glebagrades();
			break;
		case 4: ashkargrades();
			break;
		case 5: return 0;
		default: printf("Error!\n");
		}
	}
}
	