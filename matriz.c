#include <stdio.h>
#include <stdlib.h>
//matriz principal
int matriz[18][18]={
/*0*/{0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
/*1 go karts*/{0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0},
/*2 ju premio*/{0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0},
/*3 vuetas juego*/{0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0},
/*4 ganar premio*/{0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0},
/*5 subirse otro juego*/{0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
/*6 juego extremo*/{0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0},
/*7 comer*/{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
/*8 mucho*/{0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0},
/*9 poco*/{0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},
/*10 nada*/{0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0},
/*11 irte*/{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0},
/*12 seguir*/{0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0},
/*13 sentarte*/{0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0},
/*14 vomitar*/{0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},
/*15 la pasaste mal*/{0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1},
/*16 te divertiste*/{0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},
/*17 irse a su casa*/{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
//main
int main(void) {
  //matrices de escenas y escenarios
char escenas[18][100]={
{"inicio"},
{"1.- go karts"},
{"2.- juego con premio"},
{"3.- juego de vueltas"},
{"4.- ganar premio"},
{"5.- subirse a otro juego"},
{"6.- juego extremo"},
{"7.- comer"},
{"8.- mucho"},
{"9.- poco"},
{"10.- nada"},
{"11.- irte "},
{"12.- segur"},
{"13.-sentarse"},
{"14.- vomitar"},
{"15.- pasarla mal"},
{"16.- divertido"},
{"17.- irte a tu casa"}};
char esenarios[18][100]={
  {"Usted esta en el inicio"},
  {"Te subiste a los go karts"},
  {"Participaste en un juego con premio"},
  {"Te subiste a un juego de vueltas"},
  {"Acabas de ganar premio"},
  {"A que otro juego te vas a subir?"},
  {"Wow!!, te subiste a un juego extremo"},
  {"Llego la hora de comer"},
  {"Acabas de comer mucho"},
  {"Acabas de comer poco"},
  {"No comiste nada!! :("},
  {"Decides irte "},
  {"Vas a segur?"},
  {"Acabas de sentarse"},
  {"Ups!!, Acabas de vomitar"},
  {"Acabas de pasarla mal, lo sentimos :["},
  {"Esto fue demasiado divertido!!"},
  {"Llego la hora de irte a tu casa\n Quieres volver a jugar? \n \n 0.-Si \n \n18.-No "}};
  //variables
  int resp,i=0, respuestas[50],r=0,respa=0,x=0, u=0;
  //for de filas
  for(;i<18;){
    
    //arreglo de opciones ya elegidas menos 5 y 14 para bien de la historia
    if(resp!=5 || resp!=14){
    respuestas[r]=resp;
    r++;
    //te lleva a la escena en la que pusiste algo mas 
    x=u-1;
    respa=respuestas[x];
    }
    //imprime el escenario principal
    if(i==0){
       printf("%s\n \n",esenarios[i]);
    }
    //for de columnas(opciones)
    for(int j=0;j<18;j++){
      if(matriz[i][j]>0){
        printf(" %s\n",escenas[j]);
    } 

  } 
    //elijes tu opcion
    printf("\nElija su siguiente opcion: \n>>");
    scanf(" %d",&resp);
    u++;
    //limpia la pantalla
    system("cls");
    //si pones un numero mayor te regresa la opcion invalida
    if(resp<0 || resp>18){
      printf("Opcion invalida\n");
    }
    //revisa las respuestas anteriores metidas en un arreglo para ver si ya la pusiste antes y si no te lleva a la opcion que elejiste
    for(int k=0;k<=u;k++){
    if(respuestas[k]!=resp){
      i=resp;
    }
    
    if(respuestas[k]==resp){
      printf("Ya elegiste esta opcion, vuelve a intentarlo\n \n");
      i=respa;
    }
  }
    //imprime los ecenarios
      printf("%s\n \n",esenarios[i]);
  }
  return 0;
}