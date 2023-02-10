#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
//Define Max Variable
#define MAX 100
// Structs
struct information {
    char Fname[MAX];
    char Lname[MAX];
    char PhoneNum[MAX];
    char id[MAX];
    char CartNum[MAX];
    char password[MAX];
    double inventory;
};

struct information person[100];
//
//Define functions
//main menu
void mainMenu();
// function for show employee item
void employeeMenu();
// function for show customer item
void customerMenu();
// function for exit as app
void exitMenu();
//function for create an account in file
void createAccount();
//function for edit data as file
void editAccount();
// function for check login edit
int editLoginCheck();
//function for show the richest customer
void showRichestCustomer();
//function for show and sum all of account
void showTotalAccount();
//function for back main menu
void backMainMenu();
//function for show customer data
void accountBalance();
//function for transfer money from one account to another account
void cashTransfer();
//function for withdraw money from account
void cashWithDrawl();
//function for show 10 recent account update
void recentAccountUpdates();
//function for change password of account
void changePassword();
//function for check login employee
int loginEmployee();
//function for check login customer
int loginCustomer();
//function for show data of customer
void showAccount();
//function for save file in data
void saveToFile();
//function for read file from file
int readFromFile();
// function for save index of customer from file
void saveIndexOfAccount();
// function for read index of customer from file
void readIndexOfAccount();
// function for back to customer menu in app
void backToCustomerMenu();
// function for back to employee menu in app
void backToEmployeeMenu();

int main(){
    mainMenu();
    return 0;
}


void mainMenu(){
    // Define Character
    int choice;
    // Item menu
    printf("1) Log in as an employee\n");
    printf("2) Log in as a customer\n");
    printf("3) Exit\n");
    while(1) {
        scanf("%d", &choice);
        if (choice >= 1 && choice < 4) {
            switch (choice) {
                case 1:
                    employeeMenu();
                    break;
                case 2:
                    customerMenu();
                    break;
                case 3:
                    exitMenu();
                    break;
            }
        } else {
            printf("Please select the one item!\n");
            continue;
        }
    }
};
// function for show employee item
void employeeMenu(){
    system("cls");
    if(loginEmployee()==1){
        //Define Variable
        int choice;
        if (loginEmployee()) {
            system("cls");
            // Item menu
            printf("*** Employee Menu ***\n");
            printf("1) Create an account\n");
            printf("2) Edit an account\n");
            printf("3) Show the richest customer\n");
            printf("4) Show total balance of all accounts\n");
            printf("5) Back to the main menu\n");
            while (1) {
                scanf("%d", &choice);
                if (choice >= 1 && choice < 6) {
                    switch (choice) {
                        case 1:
                            createAccount();
                            break;
                        case 2:
                            editAccount();
                            break;
                        case 3:
                            showRichestCustomer();
                            break;
                        case 4:
                            showTotalAccount();
                            break;
                        case 5:
                            backMainMenu();
                            break;
                    }
                } else {
                    printf("Please select the one item!\n");
                    continue;
                }
            }
        }
    }
}
// function for show customer item
void customerMenu(){};
// function for exit as app
void exitMenu(){};
//function for create an account in file
void createAccount(){
    // Define Variable
    static int count = 0;
    int index, in, length;
    system("cls");
    while (1) {
        for (in = indexCustomer; in < 100; in++) {
            // Define name to use it to set person account
            // Naming struct information to person
            printf("Please complete the Inputs :\n\n");
            printf("First name :\n");
            scanf("%s", person[in].Fname);
            for (index = 0; index < strlen(person[in].Fname); ++index) {
                if (isdigit(person[in].Fname[index])) {
                    printf("Not Ok Format! Please try again :\n");
                    count++;
                    printf("First name :\n");
                    scanf("%s", person[in].Fname);
                    continue;
                }
            }
            printf("Last name :\n");
            scanf("%s", person[in].Lname);
            for (index = 0; index < strlen(person[in].Lname); ++index) {
                if (isdigit(person[in].Lname[index])) {
                    printf("Not Ok Format! Please try again :\n");
                    count++;
                    printf("Last name :\n");
                    scanf("%s", person[in].Lname);
                    continue;
                }
            }
            //
            while (1) {
                printf("Phone number :\n");
                scanf("%s", person[in].PhoneNum);
                length = strlen(person[in].PhoneNum);
                if (length != 11) {
                    printf("Number must be 11 number.Please try again \n");
                    continue;
                }
                if (person[in].PhoneNum[0] != '0') {
                    printf("Number must be start with 0.Please try again \n");
                    continue;
                }
                if (person[in].PhoneNum[1] != '9') {
                    printf("Second of number must be 9 .Please try again \n");
                    continue;
                } else {
                    break;
                }

            }
            //
            while (1) {
                printf("ID :\n");
                scanf("%s", person[in].id);
                if (strlen(person[in].id) != 10) {
                    printf("ID must be 10 number.Please try again \n");
                    continue;
                } else {
                    break;
                }
            }
            //
            while (1) {
                printf("Cart number :\n");
                scanf("%s", person[in].CartNum);
                if (strlen(person[in].CartNum) != 16) {
                    printf("Cart Number must be 16 number.Please try again \n");
                    continue;
                } else {
                    break;
                }
            }
            //
            while (1) {
                printf("Password :\n");
                scanf("%s", person[in].password);
                if (strlen(person[in].password) > 4) {
                    printf("Format isn't good. Try again.\n");
                    continue;
                }
                for (index = 0; index < strlen(person[in].password); index++) {
                    if (isalpha(person[in].password[index])) {
                        count++;
                    }
                }
                if (count > 0) {
                    printf("Format isn't good. Try again.\n");
                    count = 0;
                    continue;
                } else {
                    break;
                }
            }
            //
            while (1) {
                printf("Inventory :\n");
                scanf("%lf", &person[in].inventory);
                int x = person[in].inventory;
                if (x < 0) {
                    printf("You asked for my job now , Try again.\n");
                    continue;
                } else {
                    break;
                }
            }
            break;
        };
        printf("%d",indexCustomer);
        indexCustomer++;
        break;
    }
    // saveIndexOfAccount(indexCustomer);
    showAccount(person[in]);
}
//function for edit data as file
void editAccount(){}
// function for check login edit
int editLoginCheck(){}
//function for show the richest customer
void showRichestCustomer(){}
//function for show and sum all of account
void showTotalAccount(){}
//function for back main menu
void backMainMenu(){}
//function for show customer data
void accountBalance(){}
//function for transfer money from one account to another account
void cashTransfer(){}
//function for withdraw money from account
void cashWithDrawl(){}
//function for show 10 recent account update
void recentAccountUpdates(){}
//function for change password of account
void changePassword(){}
//function for check login employee
int loginEmployee(){
    // Define Variable
    int value, index = 0;
    int Max = 10;
    int passWord;
    char userName[Max];
    int pass = 1234;
    char user[6] = "admin";
    system("cls");
    do {
        //
            if (index > 0) {
                system("cls");
                printf("The password or username is valid!\n");
            }
            printf("*** Login ***\n");
            //
            printf("Username :\n");
            scanf("%s", userName);
            getchar();
            printf("Password :\n");
            scanf("%d", &passWord);
            if (strcmp(userName, user) == 0 && passWord == pass) {
                value = 1;
                return 1;
            } else {
                value = 0;
            }
            if ((passWord != pass) || (strcmpi(userName, user) != 0)) {
                printf("The password or username is valid!\n");
                index++;
                continue;
            }
    } while (value == 0);
}
//function for check login customer
int loginCustomer(){}
//function for show data of customer
void showAccount(){}
//function for save file in data
void saveToFile(){}
//function for read file from file
int readFromFile(){}
// function for save index of customer from file
void saveIndexOfAccount(){}
// function for read index of customer from file
void readIndexOfAccount(){}
// function for back to customer menu in app
void backToCustomerMenu(){}
// function for back to employee menu in app
void backToEmployeeMenu(){}