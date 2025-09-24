#include "personer.h"
#include <stdlib.h>
#include <string.h>

struct person_t *make_person(char *first_name, char *last_name) {
    // TODO: Allokér hukommelse på heap'en til min struct person_t
    // TODO: Lav en kopi af first_name og last_name og brug kopierne

    struct person_t *new = malloc(sizeof(struct person_t));
    new->first_name = malloc(strlen(first_name) +1 );
    new->last_name = malloc(strlen(last_name) +1);
    strcpy(new->first_name, first_name);
    strcpy(new->last_name, last_name);
    return new;
}


