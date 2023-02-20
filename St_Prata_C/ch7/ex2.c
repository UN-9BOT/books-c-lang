#include <stdio.h>
// extern int printf(const char *format, ...);
#define cst_print(...) printf(__VA_ARGS__); printf("...\n\n")

#define fst_elcnt(x) (sizeof(x) / sizeof(x[0]))
#define fst_elfor(i, arr) for (int i = 0; i < fst_elcnt(arr); i++)

int main() {
    const char *strings[] = {"Wake", "Up", "Neo", "Matrix", "has", "you"};
    fst_elfor(i, strings) {
        cst_print("[%d]: %s", i, strings[i]);
    }
    return 0;
}
