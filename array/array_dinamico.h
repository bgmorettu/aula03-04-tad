#ifndef ARRAY_DINAMICO_H
#define ARRAY_DINAMICO_H

typedef struct ArrayDinamico ArrayDinamico;
ArrayDinamico* array_dinamico_create();
void array_dinamico_destroy(ArrayDinamico* array);
voyd array_dinamico_add (ArrayDinamico* array, Element element);
void array_dinamico_print (ArrayDinamico* array);
int array_dinamico_size (arrayDinamico* array);
void array_dinamico_set (arrayDinamico* array, int pos, Elementet element);

