#include <string.h>

int check_login(const char* user, const char* pass) {
    if (strcmp(user, "Philipp") == 0 && strcmp(pass, "Mikisek") == 0) {
        return 1;
    } else {
        return 0;
    }
}


