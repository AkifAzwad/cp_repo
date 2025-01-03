#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int j=1;
    char s[100];
    while(1){
    gets(s);
    if(!(strcmp(s,"#")))
    {
        break;
    }
    else if(!(strcmp(s,"HELLO")))
    {
        printf("Case %d: ENGLISH\n",j++);
    }
    else if(!(strcmp(s,"HOLA")))
    {
        printf("Case %d: SPANISH\n",j++);
    }
    else if(!(strcmp(s,"HALLO")))
    {
        printf("Case %d: GERMAN\n",j++);
    }
    else if(!(strcmp(s,"BONJOUR")))
    {
        printf("Case %d: FRENCH\n",j++);
    }
    else if(!(strcmp(s,"CIAO")))
    {
        printf("Case %d: ITALIAN\n",j++);
    }
    else if(!(strcmp(s,"ZDRAVSTVUJTE")))
    {
        printf("Case %d: RUSSIAN\n",j++);
    }
    else
    {
        printf("Case %d: UNKNOWN\n",j++);
    }

}
  return 0;
}
