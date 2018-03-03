#include <stdio.h>


int main (int argc, char* argv)
{
    int A[2][2] = {
        {1,2},
        {1,4}
    };

    int B[2][2] = {
        {1,2},
        {3,1}
    };


    int R[2][2];

    int n = 2; 

    for (int k = 0; k < 2; k++)
    {
        for (int j = 0; j < 2; j++)
        {
            if ((k == 0) & (j == 0))
            {
                 R[j][k] = (A [j][k] * B[k][k] ) + ( A[j][k+1] * B [j + 1][k]);         
            }

            else if ((k == 0) & (j == 1))
            {
                R[j][k] = (A[j][k] * B[k][k] ) + (A[j][k+1] * B[j][k]);
            }
            
            else 
            {
                R[j][k] = (A[j][k-1] * B[k-1][k]) + (A[j][k] * B[k][k]);
            }
        }    
    }


    for (int j = 0; j < 2; j++)
    {

        for (int k = 0; k < 2; k++)
        {
            printf ("R[%d][%d] = %d \n", j, k, R[j][k]);
        }
    }



    return 0;
}
