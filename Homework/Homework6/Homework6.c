/*main.c*/

#include <stdio.h>   /*printf*/
#include <string.h>  /*strstr*/
#include <stdlib.h>  /*malloc & free*/
#include <ctype.h>   /*isspace & tolower*/
#include "tree.h"

/*aqui va el tree.h*/

node* insert(char* u,char* p, node* pos,int d){
node* temp;
if (pos == NULL) {
        pos = (node*)malloc(sizeof(node));
        pos-> username = u;
        pos-> password = p;
        pos-> depth = d;
        printf("Enter add or delete, username, password: \n");

} else {
    if (strcmp(pos->username, u) == 0) {
      if (pos->password!=NULL){
      printf("This user was already registered\n\n");
      }
      else{
          pos->password = p;
          printf ("User has been registered <%s> with the password <%s>\n\n", u, p);
      }
    } else if (strcmp(pos->username, u)>0) {
      temp = insert(u, p, pos->leftchild, d + 1);
      if (pos->leftchild == NULL) {
	pos->leftchild = temp;
      }
    } else if (strcmp(pos->username, u)<0){
      temp = insert(u, p, pos->rightchild, d + 1);
      if (pos->rightchild == NULL) {
	pos->rightchild = temp;
      }
    }
  }
  return pos;
}

void alpha(node* position) {
  if (position != NULL) {
    alpha(position->leftchild);
    if (position->password!=NULL){
    printf("%s ", position->username);
    }
    alpha(position->rightchild);
  }
}

void delete(node* position, char* u, char* p, int* n){
    if (position != NULL) {

        delete (position->leftchild, u, p, n);
        delete (position->rightchild, u, p, n);
        if (strcmp(position->username, u) == 0&&strcmp(position->password, p) == 0){
            position->password=NULL;
            printf("User %s eliminated\n\n", u);
            *n = 1;
        }

    }
}

int main() {
  extern char linea[];
  node* n = NULL;
  node* tree = NULL;
  int i;
  int l = 0;
  char* u;
  char* p;
  int indicator=0;
  int spacecounter=0;
  int j;
  printf("To add a user: add user password\n");
  printf("To delete a user: del user password\n");
  printf("Names in an alphabetical order: view\n");

  while ((l = saca()) == 0) {
      spacecounter=0;
    for (j=0; j<MAX; j++){
        if (linea[j]==' '||linea[j]=='\t'){
            spacecounter++;
        }
    }
    if (strstr(linea, "del") != NULL&&strlen(linea)>=7&&spacecounter==2) {
      get(linea, password, username);
      u = (char*)malloc(sizeof(int*) * strlen(ur));
      p = (char*)malloc(sizeof(int*) * strlen(pw));
      for (i=0; i<strlen(ur);i++){
          u[i]=ur[i];
      }
      for (i=0; i<strlen(pw);i++){
          p[i]=pw[i];
      }

      indicator=0;
      delete(tree, u, p, &indicator);
      if (indicator==0){
          printf("Couldn't eliminate\n\n");
      }

      indicator=0;
      spacecounter=0;
    }

    else if (strstr(linea, "add") != NULL&&strlen(linea)>=7&&spacecounter==2) {
      get(linea, pw, ur);
      u = (char*)malloc(sizeof(int*) * strlen(ur));
      p = (char*)malloc(sizeof(int*) * strlen(pw));
      for (i=0; i<strlen(ur);i++){
          u[i]=ur[i];
      }
      for (i=0; i<strlen(pw);i++){
          p[i]=pw[i];
      }

      if (strlen(pw)>0&&strlen(ur)>0){
      n = insert(u,p, tree, 0);
	  if (tree == NULL) {
	    tree = n;
	    }
	   spacecounter=0;
      }
      else if (strlen(pw)<=0||strlen(ur)<=0){
          printf ("See the instructions\n\n");
      }
      }

    else if (strstr(linea, "view") != NULL&&strlen(linea)==4) {
      alpha(tree);
      printf("\n\n");
      spacecounter=0;
    }
    else{
        printf("See the instructions\n\n");
        spacecounter=0;
    }
  }
  return 0;
}

int saca() {

  extern char linea[];
  int c, i = 0;

  for (; i < MAX - 1 && (c = getchar()) != EOF && c != '\n';) {

        linea[i++] = c;

  }
  linea[i] = '\0';
  return c == EOF;
}

void get (char l[MAX],char p[MAX],char u[MAX]){
    int a = 4, b = 0, c=0;
    while (l[a]!=' '&&l[a]!='\t'){
        u[b]=l[a];
        b++;
        a++;
    }
    u[b]='\0';
    int longitud = strlen(u);
    a++;
    while (l[a]!=' '&&l[a]!='\t'&&l[a]!='\0'){
       p[c]=l[a];
       c++;
       a++;
    }
    p[c]='\0';
    int longitud2 = strlen(p);

}
}
