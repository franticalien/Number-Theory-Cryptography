#include <stdio.h>
int gcd(int m, int n)
{
    if(m==n) return m;
    else if(m>n)
    {
        int gcd=-9999999;
        for (int i=1; i<=n; i++)
        {
            if(m%i==0 && n%i==0)
            {
                if(i>gcd)
                {
                    gcd=i;
                }
            }

        }
        return gcd;
    }
    else
    {
        int gcd=-9999999;
        for (int i=1; i<=m; i++)
        {
            if(m%i==0 && n%i==0)
            {
                if(i>gcd)
                {
                    gcd=i;
                }
            }

        }
        return gcd;
    }
}
int main()
{
    int m,n;
    printf("Enter two natural numbers :");
    scanf("%d,%d", &m, &n);
    int g = gcd(m,n);
    printf("GCD(m,n) is %d\n",g);
    int x,y;
    int ansX, ansY;
    int count =0;

    for(x=-99999; x<=99999999; x++)
    {
        for(y=-99999; y<=99999999;y++)
        {
            if(m*x + n*y==g){
                count=1;
                ansX=x;
                ansY=y;
                break;
            }
        }
        if(count == 1) break;
    }

    printf("(%d,%d)", ansX, ansY);
    return 0;

}
