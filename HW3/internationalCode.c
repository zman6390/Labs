#include <stdio.h>

struct dialing_code {//create structure for countries and codes
    char *country; //create pointer
    int code;
};

int main (int argc, char* argv[]) { //notation to get command line arguments
    int intl_code, i;
    const struct dialing_code country_codes[] = {//create an array for the countries and codes
        {"Iceland", 354}, {"Norway", 47},
        {"Brazil",     55}, {"Czech Rep.",420},
        {"China",      86}, {"Colombia",           57},
        {"Estonia",372}, {"Egypt",              20},
        {"Ethiopia", 251}, {"France",             33},
        {"Germany",    49}, {"India",              91},
        {"Indonesia", 62}, {"Iran",               98},
        {"Italy",      39}, {"Japan",              81},
        {"Mexico",     52}, {"Nigeria",           234},
        {"Pakistan",   92}, {"Philippines",        63},
        {"Poland",     48}, {"Russia",              7}
        };

    int n_entries = sizeof(country_codes) / sizeof(*country_codes);//variable for size

    do {//do while loop to check if the entry exists and also to break if user input is -1
        int found = 0;

        printf("Please input the international code(-1 to exit): ");
        scanf("%d", &intl_code);
        if (intl_code == -1)
            break;
  
        for (i = 0; i < n_entries; i++) {
            if (country_codes[i].code == intl_code) {
                printf("The country is: %s\n", country_codes[i].country);
                found = 1;
            }
        }
        if (!found)
            printf("Code not found.\n");
    } while(1);

    return 0;
}
