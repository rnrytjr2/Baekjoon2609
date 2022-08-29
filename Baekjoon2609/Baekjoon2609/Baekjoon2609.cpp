// Baekjoon2609.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int gcd(int a, int b);
int main()
{
    int A, B,answer;
    cin >> A >> B;
    if (B > A)
    {
        int tmp;
        tmp = A;
        A = B;
        B = tmp;
    }
    answer = gcd(A, B);
    cout << answer<<"\n"<<(A*B)/answer;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }

}