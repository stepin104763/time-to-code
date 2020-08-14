#include<stdio.h>
#include<string.h>
void fun (char *);
 int main()
{
char arr[1000]="my_name_is_edcast_future_skills";
fun(arr);

return 0;
}

void fun(char arr[1000])
{
char *c=strtok(arr,"_");
while(c!=NULL)
{
printf("%s\n",c);
c=strtok(NULL,"_");

}

}
