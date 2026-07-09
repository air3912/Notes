#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(){
	FILE * pf;
	int errnum;
	pf = fopen("unexist.txt", "rb");
    if (pf == NULL)  {
        errnum = errno; //防止被其他错误覆盖
        fprintf(stderr, "error num: %d\n", errno);
        perror("open(unexist.txt)");
        fprintf(stderr, "open file error: %s\n", strerror( errnum ));
    }
    else {
    	// 继续做文件操作
        fclose (pf);
    } 
    return 0;
}

