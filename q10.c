#include<stdio.h>
void expand(char s1[],char s2[])
{
    int i,j,c;

    i=j=0;

    while((c=s1[i++]) != '\0')
        if(s1[i]=='-' && s1[i+1] >=c)
        {
            i++;
            while(c<s1[i])
            s2[j++]=c++;
        }
        else
            s2[j++]=c;

    s2[j]='\0';
}

void main(){
char s1[1000],s2[1000];
printf("enter the string ");
gets(s1);
expand(s1,s2);
printf("%s",s2);
}