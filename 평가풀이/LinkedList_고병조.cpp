#include "LinkedList_고병조.h"

void LinkedList_고병조::ParseText(const char* text)
{
    auto stringToInt = [](const char* str) -> int {
        int result = 0;
        bool isNegative = false;
        if (*str == '-') {
            isNegative = true;
            str++;
        }
        while (*str) {
            result = result * 10 + (*str - '0');
            str++;
        }
        return isNegative ? -result : result;
        };

	char buffer[64];
	strcpy_s(buffer, text);
    char* context = nullptr;
    char* token = strtok_s(buffer, " ", &context);
    if (token == nullptr)
    {
        printf("알 수 없는 명령어입니다\n");
        return;
    }
    if (strcmp(token, "Print") == 0)
    {
        token = strtok_s(nullptr, " ", &context);
        if (token == nullptr)
        {
            Print();
        }
        else
        {
            printf("파라메터 개수가 잘못됐습니다\n");
            return;
        }
    }
    else if (strcmp(token, "Add") == 0)
    {
        token = strtok_s(nullptr, " ", &context);
        if (token == nullptr)
        {
            printf("파라메터 개수가 잘못됐습니다\n");
            return;
        }
        int data = atoi(token);
        if (data != 0)
        {
            Add(data);
            Print();
        }
        else
        {
            printf("파라메터 타입이 잘못됐습니다\n");
        }
    }
    else if (strcmp(token, "Insert") == 0)
    {
        token = strtok_s(nullptr, " ", &context);
        if (token == nullptr)
        {
            printf("파라메터 개수가 잘못됐습니다\n");
            return;
        }
        int data = atoi(token);
        token = strtok_s(nullptr, " ", &context);
        if (token == nullptr)
        {
            printf("파라메터 개수가 잘못됐습니다\n");
            return;
        }
        int position = atoi(token);
        Insert(data, position);
        Print();
    }
    else if (strcmp(token, "Remove") == 0)
    {
        token = strtok_s(nullptr, " ", &context);
        if (token == nullptr)
        {
            printf("파라메터 개수가 잘못됐습니다\n");
            return;
        }
        int data = atoi(token);
        Remove(data);
        Print();
    }
    else if (strcmp(token, "RemoveAt") == 0)
    {
        token = strtok_s(nullptr, " ", &context);
        if (token == nullptr)
        {
            printf("파라메터 개수가 잘못됐습니다\n");
            return;
        }
        int position = atoi(token);
        RemoveAt(position);
        Print();
    }
    else if (strcmp(token, "Clear") == 0)
    {
        Clear();
        Print();
    }
    else
    {
        printf("알 수 없는 명령어입니다\n");
    }
}
