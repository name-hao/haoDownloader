#include "Base64.h"
#include <bitset>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>
#include <iostream>
#include <Windows.h>
#include <locale>
#include <codecvt>
using namespace std;
using std::vector;
using std::ostringstream;
using std::istringstream;
using std::stringstream;
using std::unordered_map;
using std::wstring_convert;
using std::codecvt_utf8;
using std::wstring;
static const string base64_chars =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

static inline bool is_base64( unsigned char c )
{
    return isalnum( c ) || ( c == '+' ) || ( c == '/' ) || ( c == '=' );
}


static  unordered_map<char, string > char_To_6Bits = {
    { 'A',"000000" },{ 'B',"000001" },{ 'C',"000010" },{ 'D',"000011" },{ 'E',"000100" },{ 'F',"000101" },
    { 'G',"000110" },{ 'H',"000111" },{ 'I',"001000" },{ 'J',"001001" },{ 'K',"001010" },{ 'L',"001011" },
    { 'M',"001100" },{ 'N',"001101" },{ 'O',"001110" },{ 'P',"001111" },{ 'Q',"010000" },{ 'R',"010001" },
    { 'S',"010010" },{ 'T',"010011" },{ 'U',"010100" },{ 'V',"010101" },{ 'W',"010110" },{ 'X',"010111" },
    { 'Y',"011000" },{ 'Z',"011001" },{ 'a',"011010" },{ 'b',"011011" },{ 'c',"011100" },{ 'd',"011101" },
    { 'e',"011110" },{ 'f',"011111" },{ 'g',"100000" },{ 'h',"100001" },{ 'i',"100010" },{ 'j',"100011" },
    { 'k',"100100" },{ 'l',"100101" },{ 'm',"100110" },{ 'n',"100111" },{ 'o',"101000" },{ 'p',"101001" },
    { 'q',"101010" },{ 'r',"101011" },{ 's',"101100" },{ 't',"101101" },{ 'u',"101110" },{ 'v',"101111" },
    { 'w',"110000" },{ 'x',"110001" },{ 'y',"110010" },{ 'z',"110011" },{ '0',"110100" },{ '1',"110101" },
    { '2',"110110" },{ '3',"110111" },{ '4',"111000" },{ '5',"111001" },{ '6',"111010" },{ '7',"111011" },
    { '8',"111100" },{ '9',"111101" },{ '+',"111110" },{ '/',"111111" },{ '=',"000000" }
                                                        } ;

std::string UnicodeToAscii( const std::wstring str )
{
    int iTextLen = WideCharToMultiByte( CP_ACP, 0, str.c_str( ), -1, NULL, 0, NULL, NULL );
    std::vector<char> vecText( iTextLen, '\0' );
    ::WideCharToMultiByte( CP_ACP, 0, str.c_str( ), -1, &( vecText[0] ), iTextLen, NULL, NULL );

    std::string strText = &( vecText[0] );
    return strText;
}

string base64_decode( const string& encoded_String )
{
    stringstream all_Bits, all_Ascii;
    for ( const char& single : encoded_String )
    {
        if ( is_base64(single) )
        {
            all_Bits << char_To_6Bits[single] ;
        }
    }
    //convert binary number to ascii
    string ascii_bits{ all_Bits.str( ) };
    auto begin = ascii_bits.cbegin( );
    auto end = ascii_bits.cend( ) ;
    begin += 16;
    while ( begin != end )
    {
        string temp{ begin, begin + 8 };
        char c = std::stoi(temp, nullptr,2);
        if ( c !='\0' )
            all_Ascii << c;
        begin+=8;
    }
    //return all_Ascii.str();
    //先将UTF-8转换成Unicode  
    wstring_convert<codecvt_utf8<wchar_t>> conv;
    wstring wString = conv.from_bytes( all_Ascii.str( ) );
    wString.pop_back( );
    wString.pop_back( );
    //在转换成string  
    return UnicodeToAscii( wString );
}

string base64_encode( const string & initial_String )
{
    return string( );
}