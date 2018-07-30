#pragma once
// support for UTF-8
#include<string>
using std::string;

string base64_decode( const string& encoded_String );
string base64_encode( const string& initial_String );