#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    char girlfriends[][10]={"�����","������","������","������","��˼��","����Ȼ","�����","��ٻٻ","����"};
    int line= sizeof(girlfriends)/ sizeof(girlfriends[0]);
    //int row= sizeof(girlfriends[0])/ sizeof(girlfriends[0][0]);
    for (int i = 0; i < line; i++)
    {
        printf("%s\n",girlfriends[i]);
    }
    system("pause");
    return 0;
}
