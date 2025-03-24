#include <stdio.h>
int main(){
    int array[3][3] = {
        {1, 2, 3}
        {4, 5, 6}
        {7, 8, 9}
    };

    int detplus = (array[0][0]*array[1][1]*array[2][2])+(array[0][1]*array[1][2]*array[2][0])+(array[0][2]*array[1][0]*array[2][1]);
    int detmin = (array[2][0]*array[1][1]*array[0][2])+(array[2][1]*array[1][2]*array[0][0])+(array[2][2]*array[1][0]*array[0][1]);
    int det = detplus-detmin;
    printf(det);
}