#include <stdio.h>
#include <stdlib.h>

#include "personer.h"

int main(void) {
    printf("Hello, World!\n");
    struct person_t *p = make_person("ada", "something");

    printf("Navn: %s %s \n", p->first_name, p->last_name);

    free(p->first_name);
    free(p->last_name);
    void* person_t;
    free(person_t);
    free(p);

    return 0;
}
