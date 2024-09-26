///////////////////////////////   STUDENT MANAGEMENT SYSTEM USING C   ///////////////////////////////

//libraries used...........
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

//macros...............
#define MAX_STUDENT 100
#define STUDENT_NAME 25
#define EMAIL_SIZE 30

// Structure of students.........
typedef struct student
{
    int ID;
    char name[STUDENT_NAME];
    char phone_number[11];
    char email[EMAIL_SIZE];
    int number_of_courses_enrolled_in;

}student;

//Globally creating student array.....
student stu[MAX_STUDENT];
int total_student = 0;
int student_index = -1;

//function() declaration.........
void menu();
void addummy();
void addnew();
void display_all();
void display_one();
void edit_one();
void delete_one();
void delete_all();
bool repeater();
void aboutProject();
void aboutMe();

//help functions() declarations.....
bool help_repeater();
void HELP();
void HELPER();
void help_add_one();
void help_show_all();
void help_search_one();
void help_edit_one();
void help_delete_one();
void help_delete_all();
void help_clear();
void help_help();
void help_about_project();
void help_kill_prog();
void help_dataseed();

//Main Function()...........
int main()
{
    bool flag = true;
    int i = 0;
    while(flag)
    {
        menu();
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
            //ADD DUMMY DATA
            case 0:
            {
                addummy();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //add one student
            case 1:
            {
                addnew();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //show all student
            case 2:
            {
                display_all();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //search one student
            case 3:
            {
                display_one();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //edit one student
            case 4:
            {
                edit_one();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //delete one student
            case 5:
            {
                delete_one();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //delete all students
            case 6:
            {
                delete_all();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //clear screen/terminal window
            case 7:
            {
                system("cls");
                break;
            }

            // get help
            case 8:
            {
                HELPER();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //about project
            case 9:
            {
                aboutProject();
                if(!repeater())
                {
                    flag = false;
                }
                break;
            }

            //exit the program
            case 10:
            {
                flag = false;
                break;
            }

            //INVALID INPUT CASE
            default:
            {
                printf("\nInvalid Input....!!!\n");
                break;
            }
        }
    }
    system("cls");
    aboutMe();
    printf("\n\n\tThank you for using my program.... Hope you liked it....\n\n\n");
    return 0;
}

//add dummy data
void addummy()
{
    if(total_student > 0 && student_index > -1)
    {
        printf("\n=================================================================");
        printf("\n|| RESULT: DUMMY DATA IS NOT ADDED TO THE PROGRAM              ||");
        printf("\n================================================================");
        printf("\n|| REASON: TABLE IS NOT EMPTY                                  ||");
        printf("\n=================================================================");

        return;
    }
    //data 1
    total_student++;
    student_index++;
    stu[student_index].ID = 1001;
    stu[student_index].number_of_courses_enrolled_in = 5;
    strcpy(stu[student_index].name, "Leo Messi");
    strcpy(stu[student_index].email, "leomessi10@gmail.com");
    strcpy(stu[student_index].phone_number, "7896541230");

    //data 2
    total_student++;
    student_index++;
    stu[student_index].ID = 1002;
    stu[student_index].number_of_courses_enrolled_in = 4;
    strcpy(stu[student_index].name, "Cristiano Ronaldo");
    strcpy(stu[student_index].email, "ronaldo777@gmail.com");
    strcpy(stu[student_index].phone_number, "9856742130");

    //data 3
    total_student++;
    student_index++;
    stu[student_index].ID = 1003;
    stu[student_index].number_of_courses_enrolled_in = 3;
    strcpy(stu[student_index].name, "Neymar Jr");
    strcpy(stu[student_index].email, "neymarjr11@gmail.com");
    strcpy(stu[student_index].phone_number, "8795460123");

    //data 4
    total_student++;
    student_index++;
    stu[student_index].ID = 1004;
    stu[student_index].number_of_courses_enrolled_in = 1;
    strcpy(stu[student_index].name, "Luiz Suarez");
    strcpy(stu[student_index].email, "luizSuarez7@gmail.com");
    strcpy(stu[student_index].phone_number, "9385264710");

    //data 5
    total_student++;
    student_index++;
    stu[student_index].ID = 1005;
    stu[student_index].number_of_courses_enrolled_in = 2;
    strcpy(stu[student_index].name, "Sergio Ramos");
    strcpy(stu[student_index].email, "ramossergio4@gmail.com");
    strcpy(stu[student_index].phone_number, "8879546213");

    //data 6
    total_student++;
    student_index++;
    stu[student_index].ID = 1006;
    stu[student_index].number_of_courses_enrolled_in = 3;
    strcpy(stu[student_index].name, "Angel Di Maria");
    strcpy(stu[student_index].email, "angelDImaria@gmail.com");
    strcpy(stu[student_index].phone_number, "7989458760");

    //data 7
    total_student++;
    student_index++;
    stu[student_index].ID = 1007;
    stu[student_index].number_of_courses_enrolled_in = 2;
    strcpy(stu[student_index].name, "Sunil Chetri");
    strcpy(stu[student_index].email, "chetrisunil10@gmail.com");
    strcpy(stu[student_index].phone_number, "9548769012");

    //data 8
    total_student++;
    student_index++;
    stu[student_index].ID = 1008;
    stu[student_index].number_of_courses_enrolled_in = 1;
    strcpy(stu[student_index].name, "Kiliyan Mbappe");
    strcpy(stu[student_index].email, "kiliyanmbappe@gmail.com");
    strcpy(stu[student_index].phone_number, "7898750211");

    //data 9
    total_student++;
    student_index++;
    stu[student_index].ID = 1009;
    stu[student_index].number_of_courses_enrolled_in = 2;
    strcpy(stu[student_index].name, "Erling Haaland");
    strcpy(stu[student_index].email, "erling10haaland@gmail.com");
    strcpy(stu[student_index].phone_number, "9642319820");

    //data 10
    total_student++;
    student_index++;
    stu[student_index].ID = 1010;
    stu[student_index].number_of_courses_enrolled_in = 3;
    strcpy(stu[student_index].name, "Emiliano Martinez");
    strcpy(stu[student_index].email, "EmilianoMartinez1@gmail.com");
    strcpy(stu[student_index].phone_number, "7895462550");

    printf("\n==========================================================");
    printf("\n|| RESULT: DUMMY DATA ADDED SUCCESSFULLY TO THE PROGRAM ||");
    printf("\n==========================================================");
}

//add new
void addnew()
{
    int id, course;
    char name[STUDENT_NAME];
    char email[EMAIL_SIZE];
    char phone[11];

    printf("\nEnter student ID: ");
    scanf("%d", &id);
    printf("\nEnter student name: ");
    scanf(" %[^\n]s", name);
    printf("\nEnter student's email id: ");
    scanf(" %[^\n]s", email);
    printf("\nEnter student phone number: ");
    scanf(" %[^\n]s", phone);
    printf("\nEnter number of courses this student is enrolled to (1-5): ");
    scanf("%d", &course);

    printf("\nData Validation is processing... please wait");

    bool error1 = false;        // ID
    bool error2 = false;        // NAME
    bool error3 = true;        // EMAIL
    bool error4 = false;        // PHONE
    bool error5 = false;        // COURSE

    //ID VALIDATION
    if(id<=0)
    {
        error1 = true;
    }
    for(int i = 0 ; i<total_student ; i++)
    {
        if(stu[i].ID == id)
        {
            error1 = true;
        }
    }

    //NAME VALIDATION
    if(strlen(name)>=STUDENT_NAME)
    {
        error2 = true;
    }
    for(int i = 0 ; i<strlen(name) ; i++)
    {
        if( (name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z') || name[i] == ' ')
        {
            continue;
        }
        else
        {
            error2 = true;
        }
    }
    //EMAIL VALIDATION
    if(strlen(email) >= EMAIL_SIZE)
    {
        error3 = true;
    }
    for(int i = 0 ; i<strlen(email) ; i++)
    {
        if(email[i] == '@')
        {
            error3 = false;
        }
    }
    //PHONE VALIDATION
    if(strlen(phone) != 10)
    {
        error4 = true;
    }
    for(int i = 0 ; i<10 ;i ++)
    {
        if(phone[i]>='0' && phone[i]<='9')
        {
            continue;
        }
        else
        {
            error4 = true;
        }
    }
    //COURSE VALIDATION
    if(course<=0 || course>=6)
    {
        error5 = true;
    }

    if((error1 == false) && (error2 == false) && (error3 == false) && (error4 == false) && (error5 == false))
    {
        student_index++;
        total_student++;
        stu[student_index].ID = id;
        stu[student_index].number_of_courses_enrolled_in = course;
        strcpy(stu[student_index].name, name);
        strcpy(stu[student_index].email, email);
        strcpy(stu[student_index].phone_number, phone);
        printf("\n================================================");
        printf("\n||RESULT : OPERATION SUCCESSFULL              ||");
        printf("\n================================================");
    }
    else
    {
        printf("\n================================================");
        printf("\n||RESULT : OPERATION FAILED...!!!             ||");
        printf("\n================================================");
        if(error1)
        {
            printf("\n|| [1]. Invalid ID                            ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid ID                              ||");
            printf("\n||--------------------------------------------||");
        }
        if(error2)
        {
            printf("\n|| [1]. Invalid Name                          ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid Name                            ||");
            printf("\n||--------------------------------------------||");
        }
        if(error3)
        {
            printf("\n|| [1]. Invalid Email ID                      ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid Email ID                        ||");
            printf("\n||--------------------------------------------||");
        }
        if(error4)
        {
            printf("\n|| [1]. Invalid Phone Number                  ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid Phone Number                    ||");
            printf("\n||--------------------------------------------||");
        }
        if(error5)
        {
            printf("\n|| [1]. Invalid Course Input                  ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid Course Input                    ||");
            printf("\n||--------------------------------------------||");
        }
    }
}

//show-all
void display_all()
{
    printf("\nALL REGISTERED STUDENT'S DETAILS IN THE SYSTEM: ");
    printf("\n=====================================================================================================");
    printf("\n||  STUDENT ||        STUDENT'S        ||   PHONE    ||           STUDENT'S          ||  NUMBER OF ||");
    printf("\n||    ID    ||          NAME           ||   NUMBER   ||           EMAIL ID           ||   COURSES  ||");
    printf("\n||==========||=========================||============||==============================||============||");
    if(student_index>=0)
    {
        for(int i = 0 ; i<total_student ; i++)
        {
            printf("\n||%-10d||%-25s||%-12s||%-30s||%-12d||", stu[i].ID, stu[i].name, stu[i].phone_number, stu[i].email, stu[i].number_of_courses_enrolled_in );
        }
        printf("\n=====================================================================================================");
    }
    else
    {
        printf("\n||                                    THE TABLE IS EMPTY                                           || ");
        printf("\n=====================================================================================================");
    }

    printf("\n TOTAL NUMBER OF REGISTERED STUDENT(s): %d", total_student);
}

//search one student
void display_one()
{
    printf("\nEnter student ID to see student's details: ");
    int id ;
    scanf("%d", &id);

    for(int i = 0 ; i<total_student ; i++)
    {
        if(stu[i].ID == id)
        {
            printf("\nThe DETAILS OF STUDENT WITH STUDENT ID=%d IN THE SYSTEM: ", id);
            printf("\n=====================================================================================================");
            printf("\n||  STUDENT ||        STUDENT'S        ||   PHONE    ||           STUDENT'S          ||  NUMBER OF ||");
            printf("\n||    ID    ||          NAME           ||   NUMBER   ||           EMAIL ID           ||   COURSES  ||");
            printf("\n||==========||=========================||============||==============================||============||");
            printf("\n||%-10d||%-25s||%-12s||%-30s||%-12d||", stu[i].ID, stu[i].name, stu[i].phone_number, stu[i].email, stu[i].number_of_courses_enrolled_in );
            printf("\n=====================================================================================================");
            return;
        }
    }
    printf("\n=============================================================================");
    printf("\n|| No susch Student is registered in the system with student ID: %-10d||", id);
    printf("\n=============================================================================");
}
//edit one student
void edit_one()
{
    int index = -10000;
    int id, course;
    char name[STUDENT_NAME];
    char email[EMAIL_SIZE];
    char phone[11];

    printf("\nEnter student ID: ");
    scanf("%d", &id);
    for(int i = 0 ; i<total_student ; i++)
    {
        if(stu[i].ID == id)
        {
            printf("\nStudent Found....!!!\n");
            index = i;
            break;
        }
    }
    if(index == -10000)
    {
        printf("\nNo student found with student ID = %d\n", id);
        return;
    }

    printf("\nEnter student name: ");
    scanf(" %[^\n]s", name);
    printf("\nEnter student's email id: ");
    scanf(" %[^\n]s", email);
    printf("\nEnter student phone number: ");
    scanf(" %[^\n]s", phone);
    printf("\nEnter number of courses this student is enrolled to (1-5): ");
    scanf("%d", &course);

    printf("\nData Validation is processing... please wait");

    bool error2 = false;        // NAME
    bool error3 = true;        // EMAIL
    bool error4 = false;        // PHONE
    bool error5 = false;        // COURSE

    //NAME VALIDATION
    if(strlen(name)>=STUDENT_NAME)
    {
        error2 = true;
    }
    for(int i = 0 ; i<strlen(name) ; i++)
    {
        if( (name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z') || name[i] == ' ')
        {
            continue;
        }
        else
        {
            error2 = true;
        }
    }

    //EMAIL VALIDATION
    if(strlen(email) >= EMAIL_SIZE)
    {
        error3 = true;
    }
    for(int i = 0 ; i<strlen(email) ; i++)
    {
        if(email[i] == '@')
        {
            error3 = false;
        }
    }
    //PHONE VALIDATION
    if(strlen(phone) != 10)
    {
        error4 = true;
    }
    for(int i = 0 ; i<10 ;i ++)
    {
        if(phone[i]>='0' && phone[i]<='9')
        {
            continue;
        }
        else
        {
            error4 = true;
        }
    }
    //COURSE VALIDATION
    if(course<=0 || course>=6)
    {
        error5 = true;
    }

    if((error2 == false) && (error3 == false) && (error4 == false) && (error5 == false))
    {

        stu[index].number_of_courses_enrolled_in = course;
        strcpy(stu[index].name, name);
        strcpy(stu[index].email, email);
        strcpy(stu[index].phone_number, phone);
        printf("\n================================================");
        printf("\n||RESULT : OPERATION SUCCESSFULL              ||");
        printf("\n================================================");
    }
    else
    {
        printf("\n================================================");
        printf("\n||RESULT : OPERATION FAILED...!!!             ||");
        printf("\n================================================");
        if(error2)
        {
            printf("\n|| [1]. Invalid Name                          ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid Name                            ||");
            printf("\n||--------------------------------------------||");
        }
        if(error3)
        {
            printf("\n|| [1]. Invalid Email ID                      ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid Email ID                        ||");
            printf("\n||--------------------------------------------||");
        }
        if(error4)
        {
            printf("\n|| [1]. Invalid Phone Number                  ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid Phone Number                    ||");
            printf("\n||--------------------------------------------||");
        }
        if(error5)
        {
            printf("\n|| [1]. Invalid Course Input                  ||");
            printf("\n||--------------------------------------------||");
        }
        else
        {
            printf("\n|| [1]. Valid Course Input                    ||");
            printf("\n||--------------------------------------------||");
        }
    }
}

//delete one student
void delete_one()
{
    int index = -100;
    int id;
    printf("\nEnter student ID to delete a particular student: ");
    scanf("%d", &id);
    for(int i = 0; i<total_student ; i++)
    {
        if(stu[i].ID == id)
        {
            index = i;
        }
    }
    if(index != -100)
    {
        char ch;
        printf("\n====================================================");
        printf("\n||      Student found with student ID: %-10d ||", id);
        printf("\n====================================================");
        printf("\n||                WARNING...!!!                   ||");
        printf("\n====================================================");
        printf("\n|| Once deleted the data can't be retrieved back. ||");
        printf("\n|| Press 'Y' or 'y' to confirm deletion           ||");
        printf("\n|| Press anything else to abort deletion          ||");
        printf("\n====================================================");
        printf("\n Enter your choice: ");
        scanf(" %c", &ch);
        if(ch == 'y' || ch == 'Y')
        {
            for(int j = index ; j<total_student ; j++)
            {
                stu[j] = stu[j+1];
            }
            total_student--;
            student_index--;
            printf("\n================================================");
            printf("\n||RESULT : STUDENT DELETED SUCCESSFULLY       ||");
            printf("\n================================================");
            return;
        }
        else
        {
            printf("\n================================================");
            printf("\n||RESULT : DELETION ABORTED SUCCESSFULLY      ||");
            printf("\n================================================");
        }

    }
    else
    {
        printf("\n==================================================================================");
        printf("\n||RESULT : OPERATION FAILED, NO STUDENT IS REGISTERED IN THE SYSTEM WITH ID: %d ||", id);
        printf("\n==================================================================================");
    }

}

//delete all students
void delete_all()
{
    if(total_student == 0)
    {
        printf("\n=========================================");
        printf("\n||RESULT: Table is already empty...!!! ||");
        printf("\n=========================================\n");
    }
    else
    {
        total_student = 0;
        student_index = -1;
        printf("\n====================================================");
        printf("\n||RESULT: All students are deleted successfully.  ||");
        printf("\n====================================================\n");
    }
}

//about project
void aboutProject()
{
    printf("\n\n\t===========================================================================");
    printf("\n\t|| \t\t\t      ABOUT PROJECT:        \t\t\t ||");
    printf("\n\t||=======================================================================||");
    printf("\n\t||PROJECT NAME ----------------> STUDENT MANAGEMENT SYSTEM USING C       ||");
    printf("\n\t||CREATOR NAME ----------------> AISHIK MUKHERJEE                        ||");
    printf("\n\t||PROJECT TYPE ----------------> SOLO PROJECT                            ||");
    printf("\n\t||PROGRAMMING LANGUAGES USED --> c                                       ||");
    printf("\n\t||LIBRARIES USED --------------> stdio.h, stdlib.h, string.h, stdbool.h  ||");
    printf("\n\t||CONCEPTS IMPLEMENTED/ USED --> structures, macro, fuctions,            ||");
    printf("\n\t||                               data handling, loops, storage classes,  ||");
    printf("\n\t||                               conditional statements, etc             ||");
    printf("\n\t||PROJECT STARTING DATE -------> 19.09.2024                              ||");
    printf("\n\t||PROJECT ENDING DATE ---------> 20.09.2024                              ||");
    printf("\n\t===========================================================================");
}

//miscellaneous
bool repeater()
{
    printf("\n\n=============================================");
    printf("\n||\t    RETURN TO MENU PROMT\t   ||");
    printf("\n=============================================");
    printf("\n||Press 0 to Go back to MAIN MENU          ||");
    printf("\n||Press anything else to EXIT the program  ||");
    printf("\n=============================================");

    int ch;
    printf("\n\tEnter your choice: ");
    scanf("%d", &ch);
    if( ch == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void aboutMe()
{
    printf("\n\n\t=====================================================================");
    printf("\n\t|| \t\t\t      ABOUT ME:        \t\t\t   ||");
    printf("\n\t||=================================================================||");
    printf("\n\t||PROJECT CREATOR NAME ---------> AISHIK MUKHERJEE                 ||");
    printf("\n\t||HIGHEST QUALIFICATION --------> B.Tech in CSE                    ||");
    printf("\n\t||My Email ---------------------> aishik.mukherjee.work@gmail.com  ||");
    printf("\n\t||Languages I know -------------> English, Hindi, Bengali          ||");
    printf("\n\t||Programming Languages I know -> C, Python                        ||");
    printf("\n\t||=================================================================||");
    printf("\n\t||This Project was last updated on (Date): 19.09.2024              ||");
    printf("\n\t=====================================================================");
}

void menu()
{

    printf("\n\t===================================================");
    printf("\n\t||       STUDENTS MANAGEMENT SYSTEM USING C      ||");
    printf("\n\t||===============================================||");
    printf("\n\t||\t\t     MAIN MENU:    \t\t ||");
    printf("\n\t||===============================================||");
    printf("\n\t||         OPERATION           || SWITCH/CHOICE  ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| ADD DUMMY DATA / DATASEED   ||       0        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| ADD ONE NEW STUDENT         ||       1        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| SHOW ALL STUDENT            ||       2        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| SEARCH ONE STUDENT          ||       3        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| EDIT ONE EXISTING STUDENT   ||       4        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| DELETE ANY ONE STUDENT      ||       5        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| DELETE ALL STUDENTS         ||       6        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| CLEAR SCREEN/TERMINAL       ||       7        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| GET HELP                    ||       8        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| ABOUT PROJECT               ||       9        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| KILL THE PROGRAM            ||       10       ||");
    printf("\n\t||===============================================||");
    printf("\n\t||         CREATED BY: AISHIK MUKHERJEE          ||");
    printf("\n\t===================================================");
    printf("\n");
    printf("\n\nEnter your choice: ");
}

// get help FUNCTIONS definitions
void HELP()
{
    printf("\n\t===================================================");
    printf("\n\t||\t\t  HELP MENU:    \t\t ||");
    printf("\n\t||===============================================||");
    printf("\n\t||  CHOOSE OPERATION ON WHICH  ||     SWITCH/    ||");
    printf("\n\t||    YOU NEED ASSISTANCE      ||     CHOICE     ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| ADD DUMMY DATA / DATASEED   ||       0        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| ADD ONE NEW STUDENT         ||       1        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| SHOW ALL STUDENT            ||       2        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| SEARCH ONE STUDENT          ||       3        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| EDIT ONE EXISTING STUDENT   ||       4        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| DELETE ANY ONE STUDENT      ||       5        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| DELETE ALL STUDENTS         ||       6        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| CLEAR SCREEN/TERMINAL       ||       7        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| GET HELP                    ||       8        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| ABOUT PROJECT               ||       9        ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| KILL THE PROGRAM            ||       10       ||");
    printf("\n\t||-----------------------------||----------------||");
    printf("\n\t|| ENTER ANYTHING ELSE TO EXIT THE HELP SECTION  ||");
    printf("\n\t===================================================");
    printf("\n");
    printf("\n\nEnter your choice: ");
}

void help_dataseed()
{
    printf("\n\t======================================================================");
    printf("\n\t||\tHELP PROMT FOR 'ADD DUMMY DATA / DATASEED' OPERATION        ||");
    printf("\n\t======================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                                    ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  1.  || This operation adds 10 new student's data to the table   ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  2.  || Table must be empty to perform this operation            ||");
    printf("\n\t======================================================================\n");
}

void help_add_one()
{
    printf("\n\t===============================================================");
    printf("\n\t||\tHELP PROMT FOR 'ADD ONE NEW STUDENT' OPERATION       ||");
    printf("\n\t===============================================================");
    printf("\n\t|| S.No ||            GUIDELINES                             ||");
    printf("\n\t||------||---------------------------------------------------||");
    printf("\n\t||  1.  || This operation adds a new student to the table    ||");
    printf("\n\t||------||---------------------------------------------------||");
    printf("\n\t||  2.  || Student ID must be unique                         ||");
    printf("\n\t||------||---------------------------------------------------||");
    printf("\n\t||  3.  || Only one student can be added at a time           ||");
    printf("\n\t||------||---------------------------------------------------||");
    printf("\n\t||  4.  || The student must be enrolled to at least 1 course ||");
    printf("\n\t||------||---------------------------------------------------||");
    printf("\n\t||  5.  || The student can be enrolled to at most 5 courses  ||");
    printf("\n\t===============================================================\n");
}

void help_show_all()
{
    printf("\n\t================================================================");
    printf("\n\t||\tHELP PROMT FOR 'SHOW ALL STUDENT' OPERATION       ||");
    printf("\n\t================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                              ||");
    printf("\n\t||------||----------------------------------------------------||");
    printf("\n\t||  1.  || This operation shows all the students in the table ||");
    printf("\n\t================================================================\n");
}

void help_search_one()
{
    printf("\n\t======================================================================");
    printf("\n\t||\t      HELP PROMT FOR 'SEARCH ONE STUDENT' OPERATION         ||");
    printf("\n\t======================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                                    ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  1.  || This operation searches for one student using student ID ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  2.  || Always produces/displays the student if found            ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  3.  || Always displays 'NULL' if the student is not found       ||");
    printf("\n\t======================================================================\n");
}

void help_edit_one()
{
    printf("\n\t======================================================================");
    printf("\n\t||\tHELP PROMT FOR 'EDIT ONE EXISTING STUDENT' OPERATION        ||");
    printf("\n\t======================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                                    ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  1.  || This operation can be used to edit one student at a time ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  2.  || The student must be present in the table                 ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  3.  || New student ID must be unique                            ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  4.  || The student must be enrolled to at least 1 course        ||");
    printf("\n\t||------||----------------------------------------------------------||");
    printf("\n\t||  5.  || The student can be enrolled to at most 5 courses         ||");
    printf("\n\t======================================================================\n");
}

void help_delete_one()
{

    printf("\n\t========================================================================");
    printf("\n\t||\t  HELP PROMT FOR 'DELETE ANY ONE STUDENT' OPERATION           ||");
    printf("\n\t========================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                                      ||");
    printf("\n\t||------||------------------------------------------------------------||");
    printf("\n\t||  1.  || This operation can be used to delete one student at a time ||");
    printf("\n\t||------||------------------------------------------------------------||");
    printf("\n\t||  2.  || The student must be present in the table                   ||");
    printf("\n\t========================================================================\n");
}

void help_delete_all()
{

    printf("\n\t====================================================================");
    printf("\n\t||\t   HELP PROMT FOR 'DELETE ALL STUDENTS' OPERATION         ||");
    printf("\n\t====================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                                  ||");
    printf("\n\t||------||--------------------------------------------------------||");
    printf("\n\t||  1.  || This operation deletes all the students from the table ||");
    printf("\n\t====================================================================\n");
}

void help_clear()
{
    printf("\n\t================================================================");
    printf("\n\t||\tHELP PROMT FOR 'CLEAR SCREEN/TERMINAL' OPERATION      ||");
    printf("\n\t================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                              ||");
    printf("\n\t||------||----------------------------------------------------||");
    printf("\n\t||  1.  || This operation clears the terminal window / screen ||");
    printf("\n\t||------||----------------------------------------------------||");
    printf("\n\t||  2.  || Table and the data remains the same                ||");
    printf("\n\t================================================================\n");
}

void help_help()
{
    printf("\n\t=================================================================");
    printf("\n\t||\t       HELP PROMT FOR 'GET HELP' OPERATION             ||");
    printf("\n\t=================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                               ||");
    printf("\n\t||------||-----------------------------------------------------||");
    printf("\n\t||  1.  || This operation takes you to the 'HELP MENU'         ||");
    printf("\n\t||------||-----------------------------------------------------||");
    printf("\n\t||  2.  || You can read guidelines about each operation there  ||");
    printf("\n\t=================================================================\n");
}

void help_about_project()
{
    printf("\n\t===================================================================");
    printf("\n\t||\t     HELP PROMT FOR 'ABOUT PROJECT' OPERATION            ||");
    printf("\n\t===================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                                 ||");
    printf("\n\t||------||-------------------------------------------------------||");
    printf("\n\t||  1.  || This operation displays project meta data and credits ||");
    printf("\n\t===================================================================\n");
}

void help_kill_prog()
{
    printf("\n\t================================================================================================");
    printf("\n\t||\t\t\t    HELP PROMT FOR 'KILL THE PROGRAM' OPERATION                       ||");
    printf("\n\t================================================================================================");
    printf("\n\t|| S.No ||            GUIDELINES                                                              ||");
    printf("\n\t||------||------------------------------------------------------------------------------------||");
    printf("\n\t||  1.  || This operation stops the program                                                   ||");
    printf("\n\t||------||------------------------------------------------------------------------------------||");
    printf("\n\t||  2.  || About creator is also displayed on the screen when program is successfully stopped ||");
    printf("\n\t================================================================================================\n");
}

void HELPER()
{
    HELP();

    bool flag_help = true;
    while(flag_help)
    {
        system("cls");
        HELP();
        int ch;
        scanf("%d", &ch);

        switch(ch)
        {
            case 0:
            {
                help_dataseed();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 1:
            {
                help_add_one();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 2:
            {
                help_show_all();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 3:
            {
                help_search_one();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 4:
            {

                help_edit_one();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 5:
            {
                help_delete_one();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 6:
            {
                help_delete_all();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 7:
            {
                help_clear();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 8:
            {
                help_help();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 9:
            {
                help_about_project();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            case 10:
            {
                help_kill_prog();
                if(!help_repeater())
                {
                    flag_help = false;
                }
                break;
            }
            default:
            {
                flag_help = false;
                break;
            }
        }
    }
}

bool help_repeater()
{
    printf("\n\n=================================================");
    printf("\n||\t      RETURN TO HELP MENU PROMT\t       ||");
    printf("\n=================================================");
    printf("\n||Press 0 to Go back to HELP MENU              ||");
    printf("\n||Press anything else to EXIT the HELP SECTION ||");
    printf("\n=================================================");

    int ch;
    printf("\n\tEnter your choice: ");
    scanf("%d", &ch);
    if(ch == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

