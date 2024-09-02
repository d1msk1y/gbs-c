#include <stdio.h>

// user class
struct User {
    int id;
    char name[50];
    char surname[50];
    char location[50];
};

// print as table function
int print_table(struct User users[], int size) {
    printf("ID\tName\tSurname\tLocation\n");
    printf("-------------------------------\n");
    for (int i = 0; i < size; i++) {
            printf("%d\t%s\t%s\t%s\n", users[i].id, users[i].name, users[i].surname, users[i].location);
    }
    return 0;
}

int main() {
    // create users
    struct User users[4] = {
        {1, "Peter", "Oester", "Sankt Gallen"},
        {2, "Marc", "Benz", "Herisau"},
        {3, "Sarah", "Meier", "Rorschach"},
        {4, "Julian", "Saxer", "Gossau"},
    };

    print_table(users, sizeof(users) / sizeof(users[0]));
    return 0;
}