#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

class Heart
{
private:
    float _purserate; // 박동수

public:
    Heart(float purserate)
        : _purserate(purserate)
    {
        cout << "Heart의 생성자" << endl;
    }

    ~Heart()
    {
        cout << "Heart의 소멸자" << endl;
    }

    void Show()
    {
        cout << "심장이 " << _purserate << "로 뛰고 있습니다." << endl;
    }
};

class Watch
{
private:
    string _color;

public:
    Watch(string color)
        : _color(color)
    {
        cout << "Watch의 생성자" << endl;
    }

    ~Watch()
    {
        cout << "Watch의 소멸자" << endl;
    }

    string GetColor()
    {
        return _color;
    }

    void DisplayCurrentTime()
    {
        time_t timer;
        struct tm *t;
        timer = time(NULL);
        t = localtime(&timer);

        cout << _color << "Watch의 현재시간은 " << t->tm_year + 1900 << "년" << t->tm_mon << "월 "
             << t->tm_mday << "일 " << t->tm_hour << "시" << t->tm_min << "분입니다." << endl;
    }
};

class Human
{
private:
    Heart _heart;     // Composition(포함) 강한 결합 : 포함한 객체와 생명주기 같이함
    Watch &_refWatch; // agreggation(참조) 약한 결합 : 포함한 객체와 생명주기 같이 하지 않음.

public:
    Human(float purserate, Watch &refWatch)
        : _heart(purserate), _refWatch(refWatch)
    {
        cout << "Human 생성자" << endl;
    }

    ~Human()
    {
        cout << "Human 소멸자" << endl;
    }

    void ShowHeartRate()
    {
        _heart.Show();
    }

    void DisplayWatch()
    {
        _refWatch.DisplayCurrentTime();
    }
};

int main()
{
    Watch redWatch("red");

    cout << "--------------------------- 프로그램 시작 -------------------------" << endl;
    {
        Human human(70, redWatch);

        human.ShowHeartRate();
        human.DisplayWatch();

        Human yunsuk(90, redWatch);
        yunsuk.ShowHeartRate();
        yunsuk.DisplayWatch();
    }
    cout << "--------------------------- 프로그램 종료 -------------------------" << endl;

    return 0;
}