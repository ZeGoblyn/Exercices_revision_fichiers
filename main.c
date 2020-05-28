#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TMAX 80

int main()
{
	FILE *fichier;

	int pos = 1;

	if (fichier != NULL)
	{
		fichier = fopen("exercice1.txt", "a");
	}
	else
	{
		fichier = fopen("exercice1.txt", "w");
	}


	char phrase[TMAX];

	if (fichier != NULL)
	{
		printf("Ajouter du texte:\n");
		fgets(phrase, TMAX, stdin);

		fputs(phrase, fichier);

		getchar();
	}
	else
	{
		perror("Error");
	}

	if (fichier != NULL)
	{
		fclose(fichier);
	}

	fichier = fopen("exercice1.txt", "r");

	while (!feof(fichier))
	{
		fgets(phrase, 80, fichier);

		if(!feof(fichier))
		{
		    printf("%d %s", pos, phrase);
		}
		pos++;
	}

	fclose(fichier);

    return 0;
}
