void mx_cube(int);

void mx_printchar(char c);

void mx_cube(int n)
{
    if(n > 1)
    {
        int i, k, f = n/2, l = 0;
        int sh = n;
        //--FIRST ROW--//
        for(i = 0; i < (n/2) + 1; i++)
            mx_printchar(' ');
        mx_printchar('+');
        for(i = 0; i < n*2; i++)
            mx_printchar('-');
        mx_printchar('+');
        mx_printchar('\n');
        //--FIRST ROW--//
        
        //--TOP--//
        for(i = 0; i < n/2; i++)
        {
            for(k = 0; k < f; k++)
                mx_printchar(' ');
            mx_printchar('/');
            for(k = 0; k < n*2; k++)
                mx_printchar(' ');
            mx_printchar('/');
            for(k = 0; k < l; k ++)
                mx_printchar(' ');
            f--; l++;
            mx_printchar('|');
            mx_printchar('\n');
        }
        //--TOP--//

        //--MID--//
        mx_printchar('+');
        for(i = 0; i < n*2; i++)
            mx_printchar('-');
        mx_printchar('+');
        for(i = 0; i < l; i++)
            mx_printchar(' ');
        mx_printchar('|');
        mx_printchar('\n');
        //
        if((n % 2) == 0) sh -= 1; 
        for(i = 0; i < sh/2; i++)
        {
            mx_printchar('|');
            for(int j = 0; j < n*2; j++)
                mx_printchar(' ');
            mx_printchar('|');
            for(int h = 0; h < l; h++)
                mx_printchar(' ');
            mx_printchar('|');
            mx_printchar('\n');
        }
        //
        mx_printchar('|');
        for(int j = 0; j < n*2; j++)
            mx_printchar(' ');
        mx_printchar('|');
        for(int h = 0; h < l; h++)
            mx_printchar(' ');
        mx_printchar('+');
        mx_printchar('\n');
        //--MID--//

        //--BOTTOM--//
        for(i = 0; i < n/2; i++)
        {
            mx_printchar('|');
            for(k = 0; k < n*2; k++)
                mx_printchar(' ');
            mx_printchar('|');
            for(k = l-1; k > 0; k--)
                mx_printchar(' ');
            mx_printchar('/');
            mx_printchar('\n');
            l--;
        }
        //
        mx_printchar('+');
        for(i = 0; i < n*2; i++)
            mx_printchar('-');
        mx_printchar('+');
        mx_printchar('\n');
        //--BOTTOM--//
    } else return;
}
