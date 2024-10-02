  #include <stdlib.h>
  #include <stdio.h>


// Definition of the factorielle function
int factorielle(int n) {
    if (n == 0) {
        return 1;  // base case
    } else {
        return n * factorielle(n - 1);
    }
}

int main()
{
        printf("Bonjour \n");
        printf("Choissisez une operation: +, -, *, /, %%, ^, !\n");

        char symbol;
        scanf("%c", &symbol);

        printf(" Choissisez un nombre\n");
        int x;

        scanf("%d", &x);

	if (symbol = '!') {
		int factorielle(int n) {
    		int result = 1;
    		for (int i = 1; i <= n; i++) {
        		result *= i;
    		}
    		return result;
		}
	}
        	printf("Choissisez un deuxieme nombre\n");
        	int y;
		scanf("%d", &y);

        int t;

        if(symbol == '+')
        {

                printf("addition\n");
                int t = x + y;

        }
        else if(symbol == '-' )
        {

                printf("soustraction\n");
                int t = x - y;
        }
        else if(symbol == '*' )
        {

                printf("multiplication\n");
                int t = x * y;
        }
        else if(symbol == '/' )
        {

                printf("division\n");
                int t = x / y;
        }
        else if(symbol == '%' )
        {

                printf("modulo\n");
                int t = x % y;
        }
	else if(symbol == '^' )
        {

                printf("puissance\n");
		t = 1;
		for(int count = 0; count < y; count++)
			{

			 t *= x;

			}
	}
	else if(symbol == '!' )
        {

                printf("factorielle\n");

    	if (x < 0) {
        		printf("La factorielle n'est pas définie pour les nombres négatifs.\n");
    		}
	else {
        		printf("La factorielle de %d est %d\n", x, factorielle(x));
    		}

	}
        else
        {

                printf("L'operateur n'est pas reconnu\n");
        }

	if (symbol = '!') {
	printf("%d %c = %d\n", x, symbol, factorielle(x));
	}
	else {
        printf("%d %c %d = %d\n", x, symbol, y, t);
	}
        exit (0);

}

