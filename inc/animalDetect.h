#pragma once
#include <json/json.h>
#include <iostream>
#include "absBusiness.h"

using namespace std;

class animalDetect : public absBusiness
{
    public:
    // 动物识别 api
    virtual int discern(const std::string &access_token, const std::string &base64Buf);
    // 动物识别 回调
    static size_t callback(void *ptr, size_t size, size_t nmemb, void *stream);
    // 解析json结果
    virtual Json::Value resJson();

    // 静态变量, 存储请求返回的 json字符串
    static std::string detect_result;
    // 静态变量，存储请求的 url
    static const std::string request_url;

    string m_jsonRes;
};