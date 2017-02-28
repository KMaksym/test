#include<stdio.h>

main()
{
    int a, b, result;
    printf("\nEnter the numbers to be multiplied:");
    scanf("%d%d", &a, &b);       // a > b
    result = 0;
    while (b != 0)               // Iterate the loop till b == 0
    {
        if (b & 01)               // Bitwise & of the value of b with 01
        {
            printf("odd res = %d a = %d b = %d\r\n", result, a , b );
            result = result + a;  // Add a to result if b is odd .
        }
        a<<=1;                    // Left shifting the value contained in 'a' by 1
                                  // Multiplies a by 2 for each loop
        b>>=1;                    // Right shifting the value contained in 'b' by 1.
        printf("res = %d a = %d b = %d\r\n\r\n", result, a , b );
    }
    printf("nResult:%d\r\n",result);
}

