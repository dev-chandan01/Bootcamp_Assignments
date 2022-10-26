int fact_num (int x)
{
    int f=1;
   for (int i = 1; (i <= x); i++)
    {
        f = f * i;
    }
    return f;
}

int comb_num (int n, int r)
{
    //n must greater than r
 int c= fact_num(n)/(fact_num(r)*fact_num(n-r));
 return c;
}
