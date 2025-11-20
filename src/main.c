#include "app.h"

int main(int argc, char **argv) {
    const char *name = (argc > 1) ? argv[1] : 0;
    greet(name);
    return 0;
}
