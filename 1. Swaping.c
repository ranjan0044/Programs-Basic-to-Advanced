// Swapping Two Numbers

// 1. Using a Temporary Variable
// 2. Without Using a Temporary Variable
// 3. Using Functions 
// 4. Using Pointers
// 5. Using Macros

// 1. Using a Temporary Variable
#include<stdio.h>
int main()
{
    int temp, A=10,B=20;
    temp=A,A=B,B=temp;
    printf("A= %d\n",A);
    printf("B= %d",B);
    return 0;
}





// 2. Without Using a Temporary Variable
//2.1 BY Adding and Subtracting
#include<stdio.h>
int main()
{
    int a=5,b=15;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A= %d\n",a);
    printf("B= %d",b);
    return 0;
}

//2.2 BY Multiplication and Division (only if both numbers are non-zero):
#include<stdio.h>
int main()
{
    int a=2,b=15;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("A= %d\n",a);
    printf("B= %d",b);
    return 0;
}

//2.3 XOR Operation
#include<stdio.h>
int main()
{
    int a=10,b=20;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("A= %d\n",a);
    printf("B= %d",b);
    return 0;
}





// 3. Using Functions - i have used both fun and pointer
#include<stdio.h>
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;  
}

int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("A= %d\n",a);
    printf("B= %d",b);
    return 0;
}


// 4. Using Pointers
#include<stdio.h>

void swap(int *x,int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}

int main()
{
    int a=10,b=20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    swap(ptr1,ptr2);

    printf("A= %d\n",a);
    printf("B= %d",b);
    return 0;
}



// 5. Using Macros
#include<stdio.h>
// we cannot declare inside macro block so we have to take temp from main block
#define swap(a,b,temp) { temp = a, a = b, b = temp; }

void main()
{
    int a = 234, b = 125, temp;
    swap(a,b,temp);
    printf("A= %d\n",a);
    printf("B= %d",b);

}