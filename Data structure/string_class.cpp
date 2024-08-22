#include <iostream>
#include <string.h>
#include <list>

namespace ya
{

    class string
    {
    public:
        string()
            : mStr(nullptr)
        {
        }
        string(const char* str)
            : mStr(nullptr)
        {
            int len = strlen(str);
            mLen = len;
            mStr = new char[len + 1];

            for (size_t i = 0; i < len; i++)
                mStr[i] = str[i];

            mStr[len] = '\0';
        }
        ~string()
        {
            delete[] mStr;
        }

        void operator+=(const char* str)
        {
            int newLen = mLen + strlen(str);
            char* newStr = new char[newLen + 1];

            int idx = 0;
            for (size_t i = 0; i < mLen; i++)
                newStr[idx++] = mStr[i];
            for (size_t i = 0; i <= strlen(str); i++)
                newStr[idx++] = str[i];

            char* deletStr = mStr;
            mStr = newStr;

            delete deletStr;
            mLen = newLen;
        }
        int length() {
            return mLen;
        }
        void erase() {
            for (size_t i = 0; i < mLen; i++)
                mStr[i] = 0;
        }
    private:
        char* mStr;
        int mLen;
    };
}

int main() {
    std::string hello = "Hello!";
    hello += "World";
    hello.size();
    hello.length();
    hello.erase();

    ya::string yaHallo = "Hello";
    yaHallo += "World";
    yaHallo.length();
    return 0;
}