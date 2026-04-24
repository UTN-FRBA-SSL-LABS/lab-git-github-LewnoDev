#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a,const int b) { // Ingresan dos valores inmodificables y se suman
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) { // Ingresan dos valores inmodificables y se restan
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// Ingresan dos valores y se multiplican
int multiplicar(const int a, const int b) {// Ingresan dos valores inmodificables y se multiplican
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
int esPar(int n) {
    return (n % 2) == 0;
}
