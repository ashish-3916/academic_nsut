%{
int COMMENT=0;
%}

identifier [a-zA-Z][a-zA-Z0-9]*

%%
#.*\n {printf("%sThis is a PREPROCESSOR DIRECTIVE\n",yytext);}

auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while {printf("\n%s is a KEYWORD",yytext);}

"/*" {COMMENT = 1;}
"*/" {COMMENT = 0;}

{identifier}\( {if(!COMMENT)printf("\nFUNCTION: \n%s",yytext);}

{identifier}(\[[0-9]*\])? {if(!COMMENT) printf("\n%s is an IDENTIFIER",yytext);}

\".*\" {if(!COMMENT)printf("\n%s is a STRING",yytext);}

[0-9]+ {if(!COMMENT) printf("\n%s is a NUMBER ",yytext);}

\{ {if(!COMMENT) printf("\nBLOCK BEGINS");}
\} {if(!COMMENT) printf("\nBLOCK ENDS");}

\) {if(!COMMENT);printf("\n)");}
= {if(!COMMENT) printf("\n%s is an ASSIGNMENT OPERATOR",yytext);}

\<= |
\>= |
\< |
\== |
\!= |
\> {if(!COMMENT) printf("\n%s is a RELATIONAL OPERATOR",yytext);}

\, |
\;  {if(!COMMENT) printf("\n%s is a SEPERATOR",yytext);}

%%
int main(int argc, char **argv)
{
    FILE *file;
    file=fopen("input.c","r");
    if(!file)
    {
        printf("could not open the file");
        exit(0);
    }
    yyin=file;
    yylex();
    printf("\n");
    return(0);
}

int yywrap()
{
    return(1);
}