#include <stdio.h>
#include <stdlib.h>
# include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	char stringa[50] = {'c','i','a','o','\0'}; //il \0 serve per terminare la stringa
	char stringo[50] = "ciao"; //in entrambi casi funziona comunque
	char stringe[50] = "hi";//per far vedere la funzione con con strcpy
	char stringi[50] = "Ciao", nome[50] = " Enrico";
	char s1[25] = "Topolino", s2[25]= "Poli",s3[25];
	int lunghezza,confronto;
int main(int argc, char *argv[]) {
	printf("%s\n", stringe);//mostrare hi 
	printf("%s\n",stringa);
	printf("%s\n",stringo);
	strcpy(stringe,"hello");
	printf("%s\n", stringe);//mostrare hello
	strcpy(stringe,"hi");
	printf("%s\n", stringe);//rimostrare hi
	lunghezza = strlen(stringe);//per vedere quanti caratteri ha l'array stringa (ricordo che i caratteri precedenti alla creazione di una nuova stringa non vengono eliminati viene solo messo  un \0 che il sistema da li in poi non leggera)
	printf("%s e' lungo %d\n",stringe,lunghezza);
	strcat(stringi,nome);//per unire due stringhe
	printf("%s\n\n",stringi);
	confronto= strcmp("paolo","Paolo");//confrontare due stringhe per sapere se sono differenti(ricorda che le lettere maiuscole sono differenti dalle minuscole)
	printf("%d",confronto);// se la lettera che vi è prima viene prima nell'alfabeto rispetto alla seconda darà -1 anziche 1
	printf("%s",strstr(s1,s2));
	return 0;
}
