#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
struct book a;
struct book *ptr = &a;
int p = 0;
void welcome()
{
    system("clear");
    printf("\n\n\t\t\t------------------WELCOME------------------\n\n\n\n");
}
int Login()
{
    getchar();
    system("clear");
    char id1[20] = "G";
    char password1[20] = "G";
    char id[20];
    char password[20];
label1:
    printf("\n\n\t\t\t\t------------------Login------------------\n\n\n\n");
    printf("ID : ");
    scanf("%s", &id);
    printf("Password : ");
    scanf("%s", &password);
    if (strcmp(id, id1) == 0 && strcmp(password, password1) == 0)
    {
    
        printf("Your login successful\n");
        getchar();
        getchar();
        system("clear");
        return 0;
    }
    else
    {
        printf("Your Id or Password is incorrect.\nPlease enter correct Id or Password.\n");
        getchar();
        getchar();
        system("clear");
        goto label1;
    }
}
void Mainmenu()
{
    system("clear");
    printf("\n\n\n\n");
    printf("\t\t\t* * * * * * * * * * * * * * * * *\n");
    printf("\t\t\t*                               *\n");
    printf("\t\t\t*\t1.Add Book   \t\t*\n");
    printf("\t\t\t*                               *\n");
    printf("\t\t\t*\t2.Search Book\t\t*\n");
    printf("\t\t\t*                               *\n");
    printf("\t\t\t*\t3.View Book  \t\t*\n");
    printf("\t\t\t*                               *\n");
    printf("\t\t\t*\t4.Delete    \t \t*\n");
    printf("\t\t\t*                               *\n");
    printf("\t\t\t*\t5.Quit      \t \t*\n");
    printf("\t\t\t*                               *\n");
    printf("\t\t\t* * * * * * * * * * * * * * * * *\n");
    printf("\n\n\n\n");
    selectoption();
}
struct book
{
    char bookname[20];
    int bookid;
    char authorname[20];
    char studentname[20];
};
void Addbook()
{
    printf("Book Id Number : ");
    scanf("%d", &a.bookid);
    // fflush(stdin);
    printf("Book name : ");
    scanf("%s",&a.bookname);
    // fflush(stdin);
    printf("Book Author name  : ");
    scanf("%s",&a.authorname);
    // fflush(stdin);
    printf("Book Student name : ");
    scanf("%s",&a.studentname);
    p = 1;
    printf("\n\nEnter any key return back to Main manu.......");
    getchar();
    getchar();
    Mainmenu();
}
void Searchbook()
{
    struct book a;
    int bookid1;
    printf("Enter the book  Id number : ");
    scanf("%d", &bookid1);
    if (bookid1 == (*ptr).bookid && p==1)
    {
        printf("\n\n");
        printf("Book id number  :  %d\n\n", (*ptr).bookid);
        printf("Book Name :  %s\n\n", (*ptr).bookname);
        printf("Book Author Name  :  %s\n\n", (*ptr).authorname);
        printf("Student Name  :  %s\n\n", (*ptr).studentname);
    }
    else
    {
        printf("There is no such book");
    }
    printf("\n\nEnter any key return back to Main manu.......");
    getchar(); 
    getchar();

    Mainmenu();
}
void Viewbook()
{
    if(p==1)
    {
    struct book a;
    printf("\n\n");
    printf("Book id number  :  %d\n\n", (*ptr).bookid);
    printf("Book Name :  %s\n\n", (*ptr).bookname);
    printf("Book Author Name  :  %s\n\n", (*ptr).authorname);
    printf("Student Name  :  %s\n\n", (*ptr).studentname);
    }
    else
    {
        printf("There is no such book.\n\n");
    }
     printf("\n\nEnter any key return back to Main manu.......");
    getchar();
    getchar();
    Mainmenu();
}
void Deletebook()
{
    printf("\n\n\n\t\t\tThe book entry is deleted.\n\n");
    p=0;
       printf("\n\nEnter any key return back to Main manu.......");
    getchar();
    getchar();
    Mainmenu();
}
void exitlibrary()
{
    system("clear");
    printf("\n\n\n\n\t\t------------Thanks for visiting--------------\n\n\n\n\n");
}
void selectoption()
{
    int opt;
    printf("Please enter any choice : ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        Addbook();
        break;
    case 2:int l1, l2;
        Searchbook();
        break;
    case 3:
        Viewbook();
        break;
    case 4:
        Deletebook();
        break;
    case 5:
        exitlibrary();
        break;    
    }
}
int main()
{
    welcome();
    Login();int l1, l2;
    Mainmenu();
    return 0;
}
