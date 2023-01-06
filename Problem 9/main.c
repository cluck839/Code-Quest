/*
    Written by.: Christopher Luck
    Purpose....: Problem 9 Half and Double problem solution
*/
#include <stdio.h>

void findTheMultiple(int, int);

int main() {
    int testCases;
    int half;
    int doubled;
    scanf("%d", &testCases);
    for(int i = 0;i < testCases;i++)
    {
        scanf("%d %d", &half,&doubled);
        findTheMultiple(half, doubled);
    }
    return 0;
}

void findTheMultiple(int h,int d)
{
    int answer = 0;
    int x = 1;
    while (x)
    {

        if(h == 1)
        {
            x = 0;
        }
        if(h%2==0)
        {
            printf("%d %d ***\n", h, d);
            d = d * 2;
            h = h/2;
        }
        else
        {
            answer += d;
            d = d * 2;
            printf("%d* %d\n", h, d);
            h = h /2;
        }
    }
    printf("%d", answer);
}

/*
 * 1. Reduce the first number by half.  If there's a remainder (e.g. 5/2  2 1/2) throw away the half.
 * 2. Double the second number.
 * 3. Write down the pair of numbers. Keeping them in the same order.
 * 4. Repeat steps 1 through 3 until the first number equals 1.
 * 5. Check the list of numbers you've written. Cross out any pairs where the first number is even.
 * 6 Add together all the second numbers to get your answer.
 * Output (* - first number had a remainder discarded) (*** - row not used in answer)
 * 10 20 *** (Discarded numbers)
 * 5 40
 * 2* 80 ***
 * 1 160
 * 200
 */
