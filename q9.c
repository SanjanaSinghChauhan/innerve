#include<stdio.h>
void escape(char s[1000], char t[1000]);
void main(){
char t[1000],s[1000];
printf("enter a string");
gets(t);
escape(s,t);
}
void escape(char s[1000],char t[1000]){
int c,d;
c=getchar();
d=getchar();
while(c!=EOF){
switch (c){
case '\n':
putchar('\n');
break;
case '\t':
putchar('\t');
break

}

}

}
