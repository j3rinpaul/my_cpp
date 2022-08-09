/*
Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value


Input consists of the following space-separated values:
int, long, char, float, and double, respectively.

Output Format

Print each element on a new line in the same order it was received as input.
Note that the floating point value should be correct up to 3 decimal places
and the double to 9 decimal places.

Sample Input:
3 12345678912345 a 334.23 14049.30493

Sample Output:
3
12345678912345
a
334.230
14049.304930000

 */

#include <iostream>
//All the files in the C++ standard library declare all of its entities within the std namespace
//inorder to access it we should use the namespace and std is for standard
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a ,&b,&c,&d,&e); 
    
    printf("\n%d\n%ld\n%c\n%f\n%lf",a,b,c,d,e);
    
    return 0;
}
