#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
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
    while (1) {
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
        printf("dfe");
    }
}
// function for show customer item
void customerMenu(){};
// function for exit as app
void exitMenu(){};
//function for create an account in file
void createAccount(){};
//function for edit data as file
void editAccount(){};
// function for check login edit
int editLoginCheck(){};
//function for show the richest customer
void showRichestCustomer(){};
//function for show and sum all of account
void showTotalAccount(){};
//function for back main menu
void backMainMenu(){};
//function for show customer data
void accountBalance(){};
//function for transfer money from one account to another account
void cashTransfer(){};
//function for withdraw money from account
void cashWithDrawl(){};
//function for show 10 recent account update
void recentAccountUpdates(){};
//function for change password of account
void changePassword(){};
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
};
//function for check login customer
int loginCustomer(){};
//function for show data of customer
void showAccount(){};
//function for save file in data
void saveToFile(){};
//function for read file from file
int readFromFile(){};
// function for save index of customer from file
void saveIndexOfAccount(){};
// function for read index of customer from file
void readIndexOfAccount(){};
// function for back to customer menu in app
void backToCustomerMenu(){};
// function for back to employee menu in app
void backToEmployeeMenu(){};