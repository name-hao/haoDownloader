#pragma once
// support for UTF-8
#include<string>
#include<string_view>
using std::string;
using std::string_view;
static const unsigned char base64_chars[65] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

static inline bool is_base64( unsigned char c )
{
    return isalnum( c ) || ( c == '+' ) || ( c == '/' );
}

string base64_decode( const string& encoded_String )
{
    size_t len = encoded_String.size( );
    string result;
    size_t index = 0;
    while ( len-- && (encoded_String[index]!= '=')&& is_base64(encoded_String[index] )
    {

    }
}