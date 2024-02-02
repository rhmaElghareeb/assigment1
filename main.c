#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    printf("name:Rhma Elghareeb\n");
    printf("Birth Year:2003\n");
    printf("factuly:MTE\n");
    printf("Graduation Year:2027");

    //2
    int x;
    printf("Please enter a value: ");
    scanf("%d",&x);
    printf("The value is :%d ",x);


    //3
    int y;
    printf("Enter the dollar&cents amount : ");
    scanf("%d",&y);
    printf("With tax added :%d $", y+(y* 5/100));


    //4

    int a=7,b=4;
    printf("%d\n%d\n%d\n",a|b,a&b,a^b);
     printf("%d\n%d",a<<1,a>>2);

     //5
     int i,val[3];
     printf("Enter the values: ");
     for(i=0;i<3;i++){
        scanf("%d",&val[i]);
        }
        printf("values in reverse: ");
     for(i=2;i>=0;i--){
        printf("%d\n",val[i]);
        }


      //6
      int v,r;
      printf("Enter the values: ");
      scanf("%d%d",&v,&r);
      printf("Arithmetical: %d\n%d\n%d\n%d\n%d\n",v+r,v-r,v*r,v/r,v%r);
      printf("Bitwise: %d\n%d\n%d\n%d\n%d\n",v|r,v&r,v^r,v<<1,r>>2);
      printf("logical: %d\n%d\n%d",v||r,v&&r,!v);

    return 0;
}
