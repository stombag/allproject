#include <iostream>

struct people
{
    // 구조체
    // 접근제한 지정자 public를 넣지 않았지만 들어가있어 내용을 공개한다.
public:
    int age;
    int height;
    char name[256];
};
/* 구조체와 클래스의 차이는
구조체는 디폴트 접근제한 지정자가 public:이고
클래스는 디폴트 접근제한 지정자가 private이다
*/

class cpeople
{
    // 클래스
    // 접근제한 지정자 private를 넣지 않았지만 들어가있어 내용을 숨긴다.
public:
    void Addage()
    {
        age += 1;
    }
    int age;
    int height;
    char name[256];
};

void Addage(people *p1)
{

    // A1.age += 1;
    (*p1).age += 1;
}

int main()
{

    people A;
    A.age = 10;
    A.height = 120;

    Addage(&A);

    cpeople JYP;
    JYP.age = 10;
    JYP.height = 120;

    JYP.Addage();

    return 0;
}
