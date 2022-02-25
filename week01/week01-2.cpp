#include <stdio.h>///複習字元，字串
int main()
{
    printf("現在練習讀入字元字串:");
    char c;
    scanf("%c",&c);///加&
    printf("讀到字元:%c\n",c);

    char line[1000];
    scanf("%s",line);///不加&
    printf("讀到字串: %s\n",line);

    return 0;
}
