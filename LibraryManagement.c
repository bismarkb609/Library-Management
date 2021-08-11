//GROUP 20                 INDEX NO     REFERENCE
//BOADI EVANS              3027720      20772772
//BOADU RUDOLPH OKLEY      3027820      20752498
//BOATENG BISMARK          3027920      20717762
//BOATENG DERRICK          3028020      20771085
//BOATENG KELVIN AMPOMAH   3028120      20769214


 /* LIBRARY MANAGEMENT SYSTEM*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <windows.h>
char USERNAME[30];
int STUDENTID;
void menu();
void student(void);
void student_inventory(void);
void admin(void);
void mainmenu(void);


int password;
int current_password;
int new_password;
int e;

int main(void)
{

  printf("\n\n\n\n\n\n\n\n\n\n");
  printf("\t\t\t\t\t  *=========*=========*=======*");
  printf("\n\t\t\t\t\t  |                           |");
  printf("\n\t\t\t\t\t  |   WELCOME TO ACES LIBRARY |");
  printf("\n\t\t\t\t\t  |                           |");
  printf("\n\t\t\t\t\t  *=========*=========*=======*\n");

  Sleep(3000);
  system("cls");

  mainmenu();
}
  void mainmenu()
  {


  printf("\n\n\t\t\t\t INPUT(1) FOR LIBRARIAN OTHERWISE (2) FOR STUDENT\n");
  printf("\n");
  int value;
  printf("\n\n\n\n\n\n\n\n\t\t\t\tCHOOSE AN OPTION: ");
  scanf("%d",&value);

  switch(value)            // checks the user input and directs to the required login
  {
    case 1 :
       admin();
    break;

    case 2:

        student();
    break;

    default:
       printf("INVALID INPUT\n");
       main();

  }

  return 0;


}


// THIS IS THE LIBRARIAN LOGIN PORTAL (FUNCTION)
void admin()
{

system("cls");
  printf("\t\t\t\t\t\t LIBRARIAN LOGIN PORTAL\n");
  printf("\t\t\t\t\t\t ====================\n");
  printf("\n\n\n");
  printf("\n\t\t\tENTER CREDENTIALS\n");
  printf("\n");



  start: ;

    printf("\n\t\t\tUSERNAME:");
    scanf("%s", &USERNAME);


    int Password;
    printf("\n\t\t\tPASSWORD: ");
    scanf("%d", &Password);


int passcode=2004;
  // checking validation for the librarian
  if (passcode != Password)
  {
  printf("INVALID LOGIN \n");
  int tryAgain;
  printf("Enter 1 to try again , 0 to main menu\n");
  scanf("%d", &tryAgain);

  switch(tryAgain)
  {
    case 1:
        goto start;
        break;
    case 0:
        printf("WELCOME\n");
        break;
    default:
        printf("INVALID INPUT\n");
  }


  }
  else {
      system("cls");
      menu();
  }

}



//STUDENT LOGIN PORTAL
char u[30],p[30];
void student()
{

    int e = 1234;

  system("cls");
  printf("\t\t\t\t\t\t STUDENT LOGIN PORTAL\n");
  printf("\t\t\t\t\t\t  ===================\n");
  printf("\n\n\n");
  printf("\t\t\tENTER CREDENTIALS \n");
  printf("\n");

  startagain: ;

    printf("\n\t\t\tUSERNAME:");
    scanf("%s", &u);

    int Id;
    printf("\n\t\t\tSTUDENT ID: ");
    scanf("%d", &STUDENTID);



    int p;
    printf("\n\t\t\tPASSWORD:");
    scanf("%d", &p);

    if (p == e || new_password == new_password)
    {

        printf("LOGIN SUCCESSFULL\n");
        student_inventory();

    }
     else
     {

        printf("INVALID LOGIN\n");
        goto startagain;

     }



}







// THIS IS THE LIBRARIAN INVENTORY PORTAL (FUNCTION)

void menu(void)
{

    system("cls");
    printf("\n");
    printf("\n\t\t\t\t     LIBRARIAN LOGIN PORTAL");
    printf("\n\t\t\t\t    ========================");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\tTHESE ARE THE CURRENT BOOK RECORDS\n");

    int Total_books=53458, Issued_books=10, Returned_books=32, Borrowed_books=27;
    printf("\n");
    printf("\n\t\t\t\tTOTAL BOOKS = %d\n",Total_books);
    printf("\n\t\t\t\tISSUED BOOKS = %d\n", Issued_books);
    printf("\n\t\t\t\tRETURNED BOOKS = %d\n", Returned_books);
    printf("\n\t\t\t\tBORROWED BOOKS = %d\n", Borrowed_books);
    printf("\n\t\t\t\tPRESS ANY KEY TO CONTINUE...");
try:
    getch();
    system("cls");
    printf("\n\n");
    printf("\n\n\t\t\tTO GIVE OUT,ADD RETURNED BOOKS OR ISSUE ANY BOOK PRESS 1 2 OR 3 RESPECTIVELY\n",USERNAME);


    int values;
    printf("\n\n\t\t\tENTER 4 TO GO BACK ");
    printf("\n\n\t\t\tENTER 5 TO LOGOUT ");
    printf("\n\n\t\t\tENTER 6 TO RETURN TO MAIN MENU ");
    printf("\n\n\n\n\n\t\t\t\tCHOOSE AN OPTION :");

    scanf("%d", &values);
    printf("\n");
    system("cls");
    switch(values)
    {
    case 1:
        printf("\n\t\t\t\tHOW MANY BOOKS DO YOU WANT TO GIVE OUT: ");
        int giveout;
        scanf("%d", &giveout);
        printf("\n");

        printf("\n\t\t\t\tREMOVING BOOK(S) FROM EXISTING ONE ...\n");
        Borrowed_books-=giveout;
        printf("\n");
        printf("\n\t\t\t\tBOOKS GIVEN OUT: %d ", Borrowed_books);

        break;
    case 3:
        printf("\n");

        printf("\n\t\t\t\tHOW MANY BOOK(S) DO YOU WANT TO ISSUE\n");
        int issued;
        scanf("%d", &issued);
        printf("\n");

        printf("\n\t\t\t\tADDING BOOK(S) TO EXISTING ONE ...\n");
        Issued_books+=issued;
        printf("\n");
        printf("\n\t\t\t\tISSUED BOOK(S): %d", Issued_books);

        break;
    case 2:
        printf("\n");

        printf("\n\t\t\t\tHOW MANY BOOK(S) DO YOU WANT TO ADD TO RETURNED: ");
        int returned;
        scanf("%d", &returned);
        printf("\n");

        printf("\n\t\t\t\tFETCHING YOUR BOOK(S) DATA...\n");
        Returned_books+= returned;
        printf("\n");
        printf("\n\t\t\t\tRETURNED BOOK(S): %d", Returned_books);

        break;

    case 4:
        menu();

        break;
    case 5:
        admin();
        case 6:
        mainmenu();
        break;

    default:
        printf("\n\t\t\tINVALID INPUT\n");
        printf("TRY AGAIN!, 1 for yes, 0 for no\n");
        int again;
        scanf("%d", &again);

        switch(again)
        {
        case 1:
            goto try;
            break;
        case 0:
            printf("\n\t\t\t\t\tTHANKS\n");
            break;
        default:
            printf("\n\t\t\t\t\tINVALID INPUT\n");
  }


   }
   return 0;
}



// THIS IS THE STUDENT INVENTORY PORTAL (FUNCTION)



void student_inventory()
{
 system("cls");
    printf("\n\t\t\t\t\t  THIS IS YOUR INVENTORY\n");
    printf("\n\t\t\t\t\t  ====================");
    printf("\n\n\t\t\t\tSTUDENT ID: %d",STUDENTID);
    printf("\n\n\n");
    printf("\t\t\t\tTHESE ARE YOUR CURRENT BOOKS:\n");

    int owned_books=9, issued_books=3, returned_books=4, borrowed_books=7;
    printf("\n");
    printf("\t\t\t\tOWNED BOOKS = %d\n",owned_books);
    printf("\t\t\t\tISSUED BOOKS = %d\n", issued_books);
    printf("\t\t\t\tRETURNED BOOKS = %d\n", returned_books);
    printf("\t\t\t\tBORROWED BOOKS = %d\n", borrowed_books);
    printf("\n\t\t\t\tPRESS ANY KEY TO CONTINUE...");

try:
    getch();
    system("cls");
    printf("\n");
    printf("\n\n\t\t\t\tIF YOU WANT TO BORROW, RETURN OR ISSUE ANY BOOK PRESS 1 2 OR 3 RESPECTIVELY\n");



    int value;
    printf("\n\n\t\t\t\tENTER 4 TO GO BACK ");
    printf("\n\n\t\t\t\tENTER 5 TO CHANGE PASSWORD\n");
    printf("\n\n\t\t\t\tENTER 6 TO LOGOUT ");
    printf("\n\n\t\t\t\tENTER 7 TO RETURN TO MAIN MENU ");
    printf("\n\n\n\n\n\n\t\t\t\tCHOOSE AN OPTION: ");
    scanf("%d", &value);
    printf("\n");
    system("cls");
    switch(value)
    {
    case 1:
        printf("\n\t\t\t\tHOW MANY BOOKS DO YOU WANT TO BORROW :");
        int borrow;
        scanf("%d", &borrow);
        printf("\n");

        printf("\n\t\t\t\tADDING BOOK(S) TO EXISTING ONE ...");
        borrowed_books+=borrow;
        printf("\n\n");
        printf("\n\t\t\t\tYOU NOW HAVE %d BORROWED BOOKS", borrowed_books);

        break;
    case 3:
        printf("\n");

        printf("\n\t\t\t\tHOW MANY BOOK(S) DO YOU WANT TO ISSUE: ");
        int issue;
        scanf("%d", &issue);
        printf("\n");

        printf("\n\t\t\t\tADDING BOOK(S) TO EXISTING ONE ...");
        issued_books+=issue;
        printf("\n");
        printf("\n\t\t\t\tYOU NOW HAVE %d ISSUED BOOK(S)", issued_books);

        break;
    case 2:
        printf("\n");

        printf("\n\t\t\t\tHOW MANY BOOK(S) DO YOU WANT TO RETURN");
        int returns;
        scanf("%d", &returns);
        printf("\n");

        printf("\n\t\t\t\tFETCHING BOOK(S) DATA");
        returned_books-= returns;
        printf("\n");
        printf("\n\t\t\t\tYOU NOW HAVE %d RETURNED BOOK(S)", returned_books);

        break;

        case 4:
             student_inventory();
        break;

        case 6:
            student();
        break;

        case 7:
            mainmenu();
        case 5: ;
            int current_password;
            printf("\n");
            printf("\n\n\t\t\t\tCURRENT PASSWORD: ");
            scanf("%d",&current_password);

            printf("\n");
            int new_password;
            printf("\n\n\t\t\t\tNEW PASSWORD: ");
            scanf("%d", &new_password);

            printf("\n");
            printf("\n\n\t\t\t\tCHANGING PASSWORD...\n");

            new_password = e;
            printf("\n\n\t\t\t\tPASSWORD CHANGED SUCCESSFULLY\n");
            system("cls");
            student();
            break;

    default:
        printf("\n\t\t\t\tINVALID INPUT");
        printf("TRY AGAIN!, 1 for yes, 0 for no\n");
        int again;
        scanf("%d", &again);

        switch(again)
        {
        case 1:
            goto try;
            break;
        case 0:
            printf("\n\t\t\t\tTHANKS\n");
            break;
        default:
            printf("\n\t\t\t\tINVALID INPUT");
        }


    }

return 0;
}










