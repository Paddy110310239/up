#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i,k=1,f=100;
    int ans = rand() % ( f - k +1) + k;
    printf("ans=%d\n",ans);
    
while(true)
{
do{
    printf("Guess a number(%d~%d):",k,f);
    
    if(scanf("%d",&i) != 1)
    {
        while(getchar() != '\n');
        printf("Wrong input, try again\n");
        continue;
    }
    if(i<k || i>f)
    {printf("wrang range\n");
       continue; }
    printf("\n");
 } while(i<=k || i>f);
    if(i==ans)
    {break;}
    if(i>ans)
    {f=i;}
    if(i<ans)
    {k=i;}
}
printf("Hit the Ans\n");
    return 0;
}