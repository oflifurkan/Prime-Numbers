#include <stdio.h>
#include <stdint.h>

uint32_t primeNumDisp(void);
uint32_t primeNumSave(void);
uint32_t primeNumFromNumToNum(uint32_t toNum, uint32_t fromNum);

int main()
{
        primeNumFromNumToNum(1000,30);
        primeNumDisp();
        primeNumSave();
}

uint32_t primeNumFromNumToNum(uint32_t toNum, uint32_t fromNum)
{
  // should be toNum > fromNum
      //if( toNum < fromNum )
        //{
          //uint32_t temp;
          //temp = toNum;
          //toNum = fromNum;
          //fromNum = temp;
        //}

    uint32_t counterNum;
    printf("2\n");

    while( toNum != fromNum )
    {
      while( fromNum % (counterNum) != 0 )
        counterNum++;

        if( fromNum == counterNum )
        {
          printf("%d\n", fromNum );
          counterNum = 3;
        }
    fromNum++;
    }
    return 1;
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
        return 1;
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
        return 1;
}
