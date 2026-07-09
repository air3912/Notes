#include <cstdio>
#include <cerrno>
 
int main () {
    FILE * pf;
    try {
        pf = fopen ("unexist.txt", "rb");
        if (pf == NULL) throw errno;
        // write something; 
        fclose (pf);
    } 
    catch (int errnum) {
       if (errnum!=2) fclose (pf);
       else perror("unexist.txt");
    }
    return 0;
}
