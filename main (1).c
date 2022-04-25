/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a,b,c,f,h,i;
float d[20],e[20];
int g[20];
printf("Standard Calculator");
printf("\n\nenter total number of operands ");
scanf("%d",&a);
for (b=0;b<a;b++)
{
    printf("enter operand %d ",b+1);
    scanf("%f",&d[b]);
}
c=a-1;
for (f=0;f<c;f++){
    i=f+1;
    printf("choose operation number from: 1 addition,2 subtraction,3 multiplication and 4 division ");
    scanf(" %d",&g[f]);
    if(g[f]==1){
        printf("%f\n",d[f]+d[i]);
        d[f+1]=d[f]+d[i];
    }
    else if(g[f]==2){
        printf("%f\n",d[f]-d[i]);
        d[f+1]=d[f]-d[i];
    }
    else if(g[f]==3){
        printf("%f\n",d[f]*d[i]);
        d[f+1]=d[f]*d[i];
    }
    else if(g[f]==4){
        printf("%f\n",d[f]/d[i]);
        d[f+1]=d[f]/d[i];
    }
    else {
        printf("kindly select the number from the options given\n");
        f=f-1;
    }
}



    return 0;
}
