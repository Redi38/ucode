void mx_printchar(char c);

void mx_pyramid(int);

void mx_pyramid(int n)
{
    if((n > 1)&&((n % 2) == 0))
    {
        int i = 1;

        for (int j = 0; j < n - 1; j++) 
            mx_printchar(' ');
        mx_printchar('/'), mx_printchar('\\'), mx_printchar('\n');
        
        int t = 1;
        while (i < n / 2) 
        {
            for (int j = 0; j < n - i - 1; j++)
                mx_printchar(' ');
            mx_printchar('/');

            for (int j = 0; j < t; j++)
                mx_printchar(' ');
            mx_printchar('\\');

            for (int j = 0; j < i; j++)
                mx_printchar(' ');
            mx_printchar('\\'), mx_printchar('\n');

            i++;
            t += 2;
        }

        int k = 1;
        while (k < n / 2) 
        {
            for (int j = 0; j < n - i - 1; j++)
                mx_printchar(' ');
            mx_printchar('/');

            for (int j = 0; j < t; j++)
                mx_printchar(' ');
            t += 2;
            mx_printchar('\\');

            for (int j = 0; j < n - i - 1; j++)
                mx_printchar(' ');
            mx_printchar('|'), mx_printchar('\n');

            i++;
            k++; 
        }

        mx_printchar('/');
        for (int j = 0; j < 2 * n - 3; j++)
            mx_printchar('_');
        mx_printchar('\\'), mx_printchar('|'), mx_printchar('\n');
    } else return;
}
