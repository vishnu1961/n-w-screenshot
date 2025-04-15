#include<stdio.h>
#include<stdlib.h>
int mutex=1;
int full=0;
int empty,x=0;
void producer()
{
--mutex;
--full;
++empty;
x--;
printf("producer produce the item\n");
++mutex;
}
void consumer()
{
--mutex;
++full;
--empty;
printf("consumer consume the item\n");
x++;
++mutex;
}
int main()
int n,i
{
printf("\n 1.PRODUCER\n 2.CONSUMER\n 3.EXIT\n");
printf("enter buffer size");
scanf("%d",&empty);
for(i=1;i>0;i++)
{
printf("enter your choice");
scanf("%d",&n);
switch (n)
{
case 1
if (("mutex==1")&&("empty!=0"))
printf("buffer is full\n");
}
else
{
break;
case 2
if (("mutex==1")&&("full!=0"))
printf("buffer is empty\n");
}
else
break;
case 3
exit(0);
break;
}
}
}


