#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d%d", &a,&b);
    switch(1)
    {
        case 1: a=a+b;
        b=a-b;
        a=a-b;
        printf("%d %d\n", a,b);
    }
    return 0;
}
