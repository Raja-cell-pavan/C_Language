//Program to arrange three numbers in ascending order
#include<stdio.h>
int main()
{
    int a,b,c;
    a=b=c=0;
    printf("Enter 1st no :");
    scanf("%d",&a);
    printf("Enter 2nd no :");
    scanf("%d",&b);
    printf("Enter 3rd no :");
    scanf("%d",&c);
    if(a>b)
    { if(a>c)
      { if(b>c)
        printf("The  ascending order is %d<%d<%d",c,b,a);
      }
    }
    if(a>b)
    { if(a>c)
      { if(c>b)
        printf("The  ascending order is %d<%d<%d",b,c,a);
      }
    }
    if(a<b)
    { if(b>c)
      { if(a>c)
        printf("The  ascending order is %d<%d<%d",c,a,b);
      }
    }
    if(a<b)
    { if(b>c)
      { if(c>a)
        printf("The  ascending order is %d<%d<%d",a,c,b);
      }
    }
    if(c>a)
    { if(c<b)
      { if(a>b)
        printf("The  ascending order is %d<%d<%d",b,a,c);
      }
    }
    if(c>a)
    { if(b<c)
      { if(b>a)
        printf("The  ascending order is %d<%d<%d",a,b,c);
      }
    }
    return 0;
}
