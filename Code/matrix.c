#include <stdio.h>

int main (int argc, char* argv)
{
    
    int matriz [2][2] = {
        {1, 2},
        {3,4}
    };

    int resultado [2][3];


    /* Mostra os valores de matriz
    for (int j = 0; j < 2; j++)
    {
        printf("(");
        
        for (int k = 0; k <2; k++)
        {
            printf("%d", matriz[j][k]);
            
            if (k != 1)
            {
                printf("  ");
            }

        } 
        
        printf(")\n");        
            
        
    }   
    */

    int pesos[2][3];

    for (int j = 0; j< 2; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            pesos[j][k] = j + k;
        }
    }


    for (int j = 0; j < 2; j++)
    {
        
        for (int k = 0; k < 2; k++)
        {
            




        }








    }



    /* Mostra os valores de pesos
    
    for (int j = 0; j <2; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("pesos[%d][%d] = %d\n", j, k, pesos[j][k]);   
        }

    } 
    */




    return 0;
}
