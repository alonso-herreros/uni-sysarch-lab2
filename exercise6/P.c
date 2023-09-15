#include "Tools.h"

int main(int argc, char **argv)
{
    for (int i=0; i<4; i++) {
        t_init(i);
        for (int j=1; j<argc; j++) {
            t_print(argv[i]);
        }
    }
}
