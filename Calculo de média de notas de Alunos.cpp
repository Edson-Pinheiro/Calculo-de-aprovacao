#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int qtdA;
typedef struct {
	char nome[50];
	float av1;
	float av2;
	float av3;
	float media;
		
} aluno;
aluno A[99];

//Calcula a média somando as duas maiores notas e descartando a menor se for >=7 o aluno é aprovado.
float Media(float x, float y, float z){
	if( x <= y && x <= z)
	return (y + z)/2;
	
	else if( y <= x && y <= z)
	return (x + z)/2;
	
	else if ( z <= x && z <= y)
	return (x + y)/2;
}


main(){
	
    printf("Olá! Digite a quantidade total de alunos. ");
    scanf("%d",&qtdA);
    system("cls");
        
    
 	for(int i=0;i<qtdA;i++){ 
	printf("Nome do aluno:\n");
	  scanf("%s",&A[i].nome); fflush(stdin);
	printf("Primeira nota:\n");
	  scanf("%f",&A[i].av1);
	printf("Segunda nota:\n");
	  scanf("%f",&A[i].av2);
	printf("Terceira nota:\n");
	  scanf("%f",&A[i].av3);
	  A[i].media = Media(A[i].av1, A[i].av2, A[i].av3);
	 // A[i].media=(A[i].av1+A[i].av2+A[i].av3)/3;
	  printf("A media do aluno %s e %.1f\n",A[i].nome,A[i].media);
	  if (A[i].media >=7)
	  printf("ALUNO APROVADO!\n");
	  else 
	      printf("ALUNO REPROVADO!");
	printf("\n\n");  
	printf("===========================================================");
	printf("\n");
	  fflush(stdin);
    }  
	printf("aperte <enter> para sair");
	 scanf("%d",&qtdA);
}
