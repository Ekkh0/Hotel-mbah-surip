#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct Room_type {
    int room_type_name;
    int room_type_price;
};

struct Customer {
    char customer_name[255];
    int customer_age;
    char customer_cause_of_death[255];
    char customer_resting_place[255];
    int customer_died_year;
    int room_type_id;
};

void menu(){
    printf ("Hotel Mbah Surip\n");
    printf ("1. Add new customer\n");
    printf ("2. Read data\n");
    printf ("3. Update data\n");
    printf ("4. Remove data\n");
    printf ("5. Exit");
    printf ("\n");
    printf ("Choice [1-5] >>");
}

void wordart(){
    FILE *image;
    image = fopen("../codes/image.txt","r");
    char read_string[128];
    while(fgets(read_string,sizeof(read_string),image)!=NULL){
        printf("%s", read_string);
    }
    fclose(image);
}

int main(){
    int a;
    menu();
    scanf ("%d", &a);
    switch (a){
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        wordart();
        break;
    }
    return 0;
}
