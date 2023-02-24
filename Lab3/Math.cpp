#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <cstring>
#include <cstdarg>
int Math::Add(int a, int b) {
    return a + b;
}

int Math::Add(int a, int b, int c) {
    return a + b + c;
}

int Math::Add(double a, double b) {
    return int(a + b);
}

int Math::Add(double a, double b, double c) {
    return int(a + b + c);
}

int Math::Mul(int a, int b) {
    return a * b;
}

int Math::Mul(int a, int b, int c) {
    return a * b * c;
}

int Math::Mul(double a, double b) {
    return int(a * b);
}

int Math::Mul(double a, double b, double c) {
    return int(a * b * c);
}

int Math::Add(int count, ...) {
    va_list list;
    va_start(list, count);
    int s = 0;
    for (int i = 0; i < count; i++) {
        s += va_arg(list, int);
    }
    va_end(list);
    return s;
}
char* Math::Add(const char* a, const char* b) {
    if (a == nullptr || b == nullptr) {
        return nullptr;
    }
    static char c[256];
    strcpy(c, a);
    strcat(c, b);
    return c;
}