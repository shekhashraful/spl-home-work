#include<stdio.h>
#include<math.h>

struct c{
      char n[50];
      int s[5];
    };
int main()
{
    struct c ck1,ck2;

    scanf("%s",ck1.n);

    int i;

    double sum = 0,temp=0;

    for(i=0;i<5;i++){
        scanf("%lld",&ck1.s[i]);

        sum = sum + ck1.s[i];}
    sum = sum/5;
    for(i=0;i<5;i++){
        temp = temp + (sum-ck1.s[i])*(sum-ck1.s[i]);
    }
    temp = sqrt(temp/4);
    scanf("%s",ck2.n);
    sum = 0;
    double temp2=0;
    for(i=0;i<5;i++){
        scanf("%lld",&ck2.s[i]);

        sum = sum + ck2.s[i];
    }
    sum  =  sum / 5 ;
    for( i=0;i<5;i++){
        temp2 = temp2 + (sum-ck2.s[i])*(sum-ck2.s[i]);
    }
    temp2 = sqrt(temp2/4);

    if(temp>temp2){
        printf(" Better player  is %s",ck2.n);
    }
    else if(temp<temp2){
        printf("Better  player is %s",ck1.n);
    }
    else{
        printf("Both player  are equally better ");
    }

    return 0;
}
