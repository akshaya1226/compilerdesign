%{
    int vow_count=0;
    int const_count =0;
%}
 
%%
[aeiouAEIOU] {vow_count++;}
[a-zA-Z] {const_count++;}

%%
int yywrap(){}
int main()
{
    printf("Enter the string of vowels and consonants:");
    yylex();
    printf("Number of vowels: %d and Number of consonants are:  %d\n", vow_count,const_count);
}
