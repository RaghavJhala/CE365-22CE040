
%{
#include <stdio.h>
int lw = 0, up = 0, dg = 0, sp = 0, l = 0,F = 0;
%}

%%
[a-z]     { lw = 1; l++; }
[A-Z]     { up = 1; l++; }
[0-9]     { dg = 1; l++; }
[*;#$@]   { sp = 1; l++; }
.         { l++; F = 1;}
\n        { if(F == 1)
	     	{
                printf("Invalid password\n");
		}
	    else{
            if (l >= 9 && l <= 15 && lw && up && dg && sp)
                printf("Valid password\n");
            else
                printf("Invalid password\n");
            }
	    
            lw = up = dg = sp = l = F = 0; 
          }
%%

int yywrap()
{
}

int main() {
    printf("Enter a String : ");
    yylex();
    return 0;
}


