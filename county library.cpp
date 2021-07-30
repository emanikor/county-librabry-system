#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>


/*-----------------------------
* Version: C99                *
* Project: Library management *
* Author:  Cornelius ekai     *
* Date:    June,2021          *
* License: MIT                *
******************************/

// adding user:
//name:
//id
//contact
//is staff

struct user {
	char name[100];
	int id;
	char tel[13];
	int is_stuff;
};

//function prototype

void execute_action(int action);
void close();
int menu();
void add_user();
void view_user();

int main()
{

    int action;
    while(1) {
    	action = menu();
    	execute_action(action);
    	printf("\npress any key to continue");
    	getch();
    	system("cls");
 ;  	
    printf("\tCounty Library Management System!\n");
    printf("Welcome Cornelius\n");
    // Navigation menu
    int action;
    do {
        printf("1. Add user\n");
        printf("2. Add Book\n");
        printf("3. Exit\n");
        printf("Select action(1-3): ");
        scanf("%d",&action);
        // validate input
        if (action < 1 || action > 3)
            printf("Invalid action. Try again\n");
    } while(action < 1 || action > 3);
      action = menu();
     exucuted_action(action);

    return 0;
}

void execute_action(int action){
    switch(action) {
  case 1:
    ; addn_user();
      break;
  case 2:
      printf("adding a book\n");
      break;
  case 3:
      close();
      break;
  default:
     printf("unknown action. \n");

     }

}

void close() {
    printf("thanks you for using the system\n");
    printf("Bye\n");
    Sleep(5000);
     exit(0);
}


int menu();
     // Navigation menu
     int main;
    do {
        printf("1. Add user\n");
        printf("2. Add Book\n");
        printf("3. Exit\n");
        printf("Select action(1-3): ");
        scanf("%d",&action);
        // validate input
        if (action < 1 || action > 3)
            printf("Invalid action. Try again\n");
            sleep(2000);
            system("cls");
       }

    } while(action < 1 || action > 3);

    return action;
    
void add_user() (
     struct user u;
     FILE *fp;
     if (fp + fopen("user","AB))==NULL) (
        PRINTF("cannot open file.\n"):I
        exit(1);
     )  
     printf("name: ")
     getchar();
     gets(u.mame);
	  printf("ID numuber: ");
     scanf(%d",&u.id");
     printf("phone Number: ");
     scanf("%s",&u.tel);
     printf("user type(1 for staff, 0 for ordinary user:");
     scanf("%d",&u.id);
	 fwrite(&u, sizeof(struct user), 1 fp);
	 fclose(fp);
	 printf("user succefully added\n");
}
