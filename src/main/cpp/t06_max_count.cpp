//Последовательность состоит из натуральных чисел и завершается числом 0. Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
//
//Формат входных данных
//        Вводится непустая последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//1
//7
//9
//0
//Sample Output 1:
//
//1
//Sample Input 2:
//
//1
//3
//3
//1
//0
//Sample Output 2:
//
//2

#include "t06_max_count.h"
#include <iostream>

using namespace std;

int t06_max_count() {
    int n, max, c = 1;
    cin >> n;
    max = n;
    while(n != 0) {
        cin >> n;
        if(max < n) max = n, c = 1;
        else if (n == max) c++;
    }
    cout << c;
};