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
void exelentgrades();
void glebagrades();
void ashkargrades();

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

struct student
{
	char name[30];
	int mark1, mark2, mark3, mark4, mark5;
};

void studentlist(student *mas, int *n);
void exelentgrades(student *mas, int n);
void glebagrades(student *mas, int n);
void ashkargrades(student *mas, int n);


int main()
{
	setlocale(LC_CTYPE, "Rus");
	for (;;)
	{
		int menu1;
		printf("|***********************************************************|\n"
			"|                Ââåäèòå íîìåð ñ ìåíþ íèæå                  |\n"
			"|***********************************************************|\n"
			"|1-Ñïèñîê ñòóäåíòîâ                                         |\n"

			"|2-Ñïèñîê ñòóäåíòîâ êîòîðûå ñäàëè âñå ýêçàìåíû òîëüêî íà 5  |\n"

			"|2-Ñïèñîê ñòóäåíòîâ êîòîðûå ñäàëè âñå æêçàìåíû òîëüêî íà 5  |\n"

			"|3-Ñïèñîê ñòóäåíòîâ êîòîðûå èìåþò 3                         |\n"
			"|4-Ñïèñîê ñòóäåíòîâ êîòîðûå èìåþò 2                         |\n"
			"|5-Âûõîä                                                    |\n"
			"|***********************************************************|\n");
		printf(">>");
		scanf("%i", &menu1);

		system("cls");
		switch (menu1)
		{
		case 1:studentlist();
			break;
		case 2: exelentgrades();
			break;
		case 3:glebagrades();
			break;
		case 4:ashkargrades();
			break;
		case 5: break;
		default: printf("Error!\n");
		}
		return 0;
	}


		system("cls");

			switch (menu1)
			{
			case 1: {
				studentlist();
				break;
			}

			case 2: {
				exelentgrades();
				break; }
			case 3: {
				glebagrades();
				break; }
			case 4: {
				ashkargrades();
				break; }
			case 5: break;
			default: printf("Error!\n");
			}

	printf("The program is completed\n");
	return 0;

}
	