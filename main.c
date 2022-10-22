#include "HeadFile.h"
/*
#include <stdio.h>
#include <stdlib.h>
/*
#include <math.h>
#include <string.h>


#include "fMenu.c"
#include "print.c"
#include "cal.c"
#include "pi.c"

#include "fac.h"
*/

int main()
{

    int check=1;
    while(check)
    {
        system("cls");
        int cc=fMenu();
        switch(cc)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            divi();
            break;
        case 5:
            sMenu();
            break;
        case 6:
            pi();



            break;
        case 7:
            fac();
            break;
        case 10:
            check=0;
            break;
        default:
            printf("error!\n");
            printf("please input again!\n");
            printf("please press 'enter' to continue!\n");
            getchar();
            break;
        }
        getchar();
        getchar();
    }

    return 0;
    
}
