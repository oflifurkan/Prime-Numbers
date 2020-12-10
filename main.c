#include <stdio.h>
#include <stdint.h>

uint32_t primeNumDisp(void);
uint32_t primeNumSave(void);

int main()
{
        primeNumDisp();
        primeNumSave();
}

uint32_t primeNumDisp(void)
{
        uint32_t a,b=3,c=2;
        scanf("%d",&a);
        printf("2\n");
        while(b!=a)
        {
        while(b%(c)!=0)
        c++;
        if(b==c)
        {
        printf("%d\n",b);
        c=2;
        }

        b++;
        }
}

uint32_t primeNumSave(void)
{
        FILE *prime ;
        prime = fopen("prime.txt", "a+");

        uint32_t a,b=3,c=2;
        scanf("%d",&a);
        fprintf(prime,"2\n");
        while(b!=a)
        {
                while(b%(c)!=0)
                        c++;
                if(b==c)
                {
                fprintf(prime,"%d\n",b);
                c=2;
                }

        b++;
        }
}
