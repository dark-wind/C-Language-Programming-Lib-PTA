#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    double x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("Zero Equation");
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        printf("Not An Equation");
    }
    else
    {
        if (a == 0)
        {
            printf("%.2f\n", -c / b);
        }
        else
        {
            double derta = b * b - 4 * a * c;
            if (derta > 0)
            {
                x1 = ((0 - b) + sqrt(derta)) / (2 * a);
                x2 = ((0 - b) - sqrt(derta)) / (2 * a);
                printf("%.2f\n", x1);
                printf("%.2f\n", x2);
            }
            else if (derta == 0)
            {
                x1 = (0 - b) / (2 * a);
                printf("%.2f\n", x1);
            }
            else
            {
                derta = 0-derta;
                printf("%.2f+%.2fi\n", (0-b)/(2*a),sqrt(derta)/(2*a));
                printf("%.2f-%.2fi\n", (0-b)/(2*a),sqrt(derta)/(2*a));
            }
        }
    }

    return 0;
}