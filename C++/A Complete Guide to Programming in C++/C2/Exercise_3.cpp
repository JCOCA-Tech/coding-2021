/*
Which of the variable definitions shown below is invalid or does not make sense?


    int a(2.5);
    const long large;
    int b = '?';
    char c('\'');
    char z(500);
    unsigned char ch = '\201';
    int big = 40000;
    unsigned size(40000);
    double he's(1.2E+5);
    float val = 12345.12345;
*/

/*
    int a(2.5);
    const long large;
    char z(500);
    int big = 40000;
    double he's(1.2E+5);
    float val = 12345.12345;
*/

int main(int argc, char const *argv[])
{
    return 0;
}

/*
SOLUTION

int a(2.5);               // 2.5 is not an integer value
const long large;         // Without initialization
char z(500);              // The value 500 is too large to fit in a byte
int big = 40000;          // Attention! On 16-bit systems int values are <= 32767
double he's(1.2E+5);      // The character ' is not allowed in names
float val = 12345.12345;  // The accuracy of float is only 6 digits 
*/
