#include <stdio.h>
#include <string.h>

int sum(int a, int b);

int main() {
//    printf("Hello,C language!\n");
//    printf("%d\n",sizeof(long ));
//    printf("%d\n",sizeof(int));

//    char arr[] = {'a','b','c','\0'};
//    char arr1[] = {'a','b'};
//    printf("%s\n",arr);
//    printf("%d\n",strlen(arr1));
//    printf("%d\n",strlen("c:\\test\\32\\test.c"));
//    printf("%c\n",'\32');
//    printf("%c\n",'\x32');
//    return 0;
//    int m = 5;
//    int n = 8;
//    int r;
//    r = sum(m,n);
//    printf("%d\n",r);

    //数组
//    int arr[10] = {0};
//    printf("%d\n",arr[5]);
//    for(int i = 0; i < 10; i ++)
//    {
//        printf("%d\t",arr[i]);
//    }

    //操作符
//    int a = 1;
//    a <<= 1;
//    printf("%d\n",a);
//    int m = 3;
//    int n = 5;
//    int c = m ^ n;
//    printf("%d\n",c);
    int a = -5;
    int b;
    b = a / 2;
    printf("%d\n",b);

}

int sum(int a, int b)
{
    return a + b;
}
