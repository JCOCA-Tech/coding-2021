#include <iostream>


/*
Write a function 'fib(n)' that takes in a number as an argument.
The function should return the n-th number of the Fibonacci sequence.

The 1st and 2nd number of the sequence is 1.
To generate the next number of the sequence, we sum the previous two.

    n:      1,  2,  3,  4,  5,  6,  7,  8,  9,  ...
    fib(n): 1,  1,  2,  3,  5,  8,  13, 21, 34, ...

*/

/*
TODO: Implement execution timer that also shows execution timers for every level of recursion
*/

void fibIterationTest(int);

//float executionTimer(int);
//int depth;
/*
int main()
{
    int n;

    std::cout << "n = ";
    std::cin >> n;
    fibIterationTest(n);

    return 0;
}

unsigned long fib(int n) // VERY inefficient implementation, values over 50 take a lot of computation
{
    if (n <= 2)
    {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

void fibIterationTest(int n)
{
    for(int i = 1; i <= n; i++)
    {
        std::cout << "[" << i << "]: " << "fib(" << i << ") = " << fib(i) << std::endl;
        //std::cout << "["<< depth << "]: Execution timer Total " << executionTimer << std::endl;
    }
}
*/
/*
float executionTimer(int mode)
{
    if(mode == 0)
    {
        // Execution timer with depth tree 
    } else {
        // Execution timer
    }
    
    return 0;//static 
}
*/


// analyzing complexity of recursive algorithms

void foo(int),bar(int), dib(int);

int main()
{
    //foo(3);
    //bar(3);
    dib(3);
    return 0;
}

void foo(int n)
{
    if(n <= 1)
    {
        std::cout<<"[EXIT] foo()" << std::endl;
    } else {
        foo(n-1);
        std::cout << "foo("<< n - 1 << ")" << std::endl;
    }
}

void bar(int n)
{
    if(n <= 1)
    {
        std::cout<<"[EXIT] bar()" << std::endl;
    } else {
        foo(n-2);
        std::cout << "bar("<< n - 1 << ")" << std::endl;
    }
}

void dib(int n)
{
    if(n <=1)
    {
        std::cout<<"[EXIT] dib()" << std::endl;
    } else {
        dib(n - 1);
        std::cout << "dib("<< n - 1 << ")" << std::endl;
        dib(n - 1);
        std::cout << "dib("<< n - 1 << ")" << std::endl;
    }
}