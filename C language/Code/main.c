#include <stdio.h>
#include <string.h>

int main() {
//    printf("Hello,C language!\n");
//    printf("%d\n",sizeof(long ));
//    printf("%d\n",sizeof(int));

    char arr[] = {'a','b','c','\0'};
    printf("%s\n",arr);
    printf("%d\n",strlen(arr));
    return 0;
}
