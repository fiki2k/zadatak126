// Program treba transponirat matricu.

#include<stdio.h>

int main()
{
    int A[10][10],B[10][10],i,j,m,n;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n\n");
    }

    /*
      Pronade transponiranu matricu
     */
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            // Sprema svaki redak matrice A u stupce matrice B.
            B[i][j] = A[j][i];
        }
    }


    /*
     Ispis matrice A.
     */
    printf("\nTransponirana matrica A je: \n\n");

        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", B[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
