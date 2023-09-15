#include "Tools.h"

int main(int argc, char **argv) {
    for (int i=1; i<argc; i++) {
        t_print(argv[i], i);
    }
}
