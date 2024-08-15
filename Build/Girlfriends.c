#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    char girlfriends[][10]={"吴昊天","吴文琪","覃宁瑶","高子瑶","李思雅","朱欣然","徐璐瑶","徐倩倩","张婷"};
    int line= sizeof(girlfriends)/ sizeof(girlfriends[0]);
    //int row= sizeof(girlfriends[0])/ sizeof(girlfriends[0][0]);
    for (int i = 0; i < line; i++)
    {
        printf("%s\n",girlfriends[i]);
    }
    system("pause");
    return 0;
}
