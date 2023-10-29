#include <stdio.h>
#include <conio.h>

int main() {
    char choice;
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;
	int b11, b12, b13, b21, b22, b23, b31, b32, b33;

    clrscr();


    printf("Enter what operation you want to perform on the matrix\n D = Determinant: \n T = Transpose: \n A = Addition\n  S = Subtraction");
    scanf(" %c", &choice);

 // code for determinant

    if (choice == 'D') {
	int det;
    clrscr();

	// code to enter matrix
	printf("Enter elements of Row 1: ");
	scanf("%d %d %d", &a11, &a12, &a13);

	printf("Enter elements of Row 2: ");
	scanf("%d %d %d", &a21, &a22, &a23);

	printf("Enter elements of Row 3: ");
	scanf("%d %d %d", &a31, &a32, &a33);

	det = a11 * ((a22 * a33) - (a32 * a23)) - a12 * ((a21 * a33) - (a31 * a23)) + a13 * (a21 * a32) - (a31 * a22);

	printf("Determinant is %f\n", det);
    }

// code for transpose

    else if(choice == 'T'){
	int temp;
	clrscr();
	scanf("%d %d %d", &a11, &a12, &a13);
	scanf("%d %d %d", &a21, &a22, &a23);
	scanf("%d %d %d", &a31, &a32, &a33);

	temp = a21;
	a21 = a12;
	a12 = temp;


	temp = a32;
	a32 = a23;
	a23 = temp;

	printf(" row 1 = %d %d %d\n", a11, a12 ,a13);
	printf(" row 2 = %d %d %d\n", a21, a22 ,a23);
	printf(" row 3 = %d %d %d\n", a31, a32 ,a33);

     }
// code for addition 


    else if(choice == 'A'){


// matrix 1
    printf("enter matrix 1\n");
	printf("Enter elements of Row 1: ");
	scanf("%d %d %d", &a11, &a12, &a13);

	printf("Enter elements of Row 2: ");
	scanf("%d %d %d", &a21, &a22, &a23);

	printf("Enter elements of Row 3: ");
	scanf("%d %d %d", &a31, &a32, &a33);


// matrix 2


    printf("matrix 2\n");
	printf("Enter elements of Row 1: ");
	scanf("%d %d %d", &b11, &b12, &b13);

	printf("Enter elements of Row 2: ");
	scanf("%d %d %d", &b21, &b22, &b23);

	printf("Enter elements of Row 3: ");
	scanf("%d %d %d", &b31, &b32, &b33);

    printf("Addition ->");
    printf(" row 1 = %d %d %d\n", a11 + b11, a12 + b12 ,a13 + b13);
	printf(" row 2 = %d %d %d\n", a21 + b21, a22 + b22 ,a23 + b23);
	printf(" row 3 = %d %d %d\n", a31 + b31, a32 + b32 ,a33 + b33);

	}


// code for subtraction
    else if(choice == 'S'){
		// matrix 1
		    printf("enter matrix 1\n");

	printf("Enter elements of Row 1: ");
	scanf("%d %d %d", &a11, &a12, &a13);

	printf("Enter elements of Row 2: ");
	scanf("%d %d %d", &a21, &a22, &a23);

	printf("Enter elements of Row 3: ");
	scanf("%d %d %d", &a31, &a32, &a33);


// matrix 2
       printf("enter matrix 2\n");

	printf("Enter elements of Row 1: ");
	scanf("%d %d %d", &b11, &b12, &b13);

	printf("Enter elements of Row 2: ");
	scanf("%d %d %d", &b21, &b22, &b23);

	printf("Enter elements of Row 3: ");
	scanf("%d %d %d", &b31, &b32, &b33);



    printf("Subration ->");
    printf(" row 1 = %d %d %d\n", a11 - b11, a12 - b12 ,a13 - b13);
	printf(" row 2 = %d %d %d\n", a21 - b21, a22 - b22 ,a23 - b23);
	printf(" row 3 = %d %d %d\n", a31 - b31, a32 - b32 ,a33 - b33);
	}


		

	




    getch();
return 0;
}

