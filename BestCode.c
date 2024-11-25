#include<stdio.h>

#define _(a,b,c) (a^=b,b^=a,a^=b,c=~c)

#define __(x,y) (x[y])

#define ___(x,y,z) (x%=(y*z)+1)

#define ____(a,b,c) while(a--&&b++)c;

int main(){int a=3,b=5,c[2]={b,a};___(a,b,_(b,c[1],c[0]));____(a,b,_(b,c[0],c[1]));printf("%d\n",__(c,a));return 0;}
/* the best of crap on c */
