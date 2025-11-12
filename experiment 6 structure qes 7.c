#include <stdio.h>
#include <string.h>
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};
int main() {
    union Address info;
    strcpy(info.hostel_address, "Room No. 21, Green Hostel, MG Road");
    printf("Present Address (Hostel): %s\n", info.hostel_address);
    return 0;
}
