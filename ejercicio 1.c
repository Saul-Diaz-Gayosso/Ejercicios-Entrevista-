#include <stdio.h>

int main() {
    int m = 1;
    int n = 20;
    int i, j = 0, k=0;
    int bandera;
    int A[50];
    
    int maux = m;
    int naux = n;
    do {
        if (m <= 1) 
        {
            //printf("%d no es primo\n", m);
        } 
        else 
        {
            bandera = 1;  
            for (i = 2; i < m; i++) { //i inicia en 2 porque desde aqui inicia la busqueda de primos
                if (m % i == 0) {
                    bandera = 0;  
                }
            }
            
            if (bandera == 1) {
                //printf("%d es primo\n", m);
                A[j] = m;
                j++;
            } else {
                //printf("%d no es primo\n", m);
            }
            
        }
        m++;
        
    } while (m <= n);
    
    for (k = 0; k<j; k++)
    {
        printf ("Numeros primos en el intervalo %d - %d: %d\n",maux,naux,A[k]);
    }

    return 0;
}
