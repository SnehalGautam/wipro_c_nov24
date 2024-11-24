/1. Add the prototypes of the I/P functions which the trainer gave on day1.
//prototypes of input function
1] getc(): 
int getc(FILE *stream); // Prototype
char ch = getc(stdin);  //example

2] putc(): 
int putc(char, FILE*);
putc(ch, stdout);

3] gets(): 
char* gets(char* str);
gets(str, stdin);

4] puts():
int puts(const char* str);
puts(str, stdout);

5] printf(): 
int printf(const char* format);
printf(format,stdout);

6] scanf(): 
int scanf(const char* format);
scanf(format,stdin);

7] sprintf(): 
int printf(char* str, const char* format,);
printf(format,stdout);

8] sscanf(): 
int scanf(const char* str, const char* format,);
scanf(format,stdin);


9] fprintf(): 
int fprintf(FILE* stream, const char* format,);
printf(format,stdout);

10] fscanf():
int fscanf(FILE* stream, const char* format,);
scanf(format,stdin);