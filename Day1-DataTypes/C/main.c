int i2;
double d2;
char s2[100]; // this is not scalable for input of unknown size

// Read inputs from stdin
scanf("%d", &i2);
scanf("%lf", &d2);
scanf("%*[\n] %[^\n]", s2); 

// Print outputs to stdout
printf("%d\n", i + i2);
printf("%.01lf\n", d + d2);
printf("%s%s", s, s2);