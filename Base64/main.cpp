#include<iostream>
#include<string>
#include "Base64.h"
using namespace std;
using std::string;
using std::wcout;

int main( )
{
    //string test_String1{ "QUFmdHA6Ly95Z2R5ODp5Z2R5OEB5ZzQ1LmR5ZHl0dC5uZXQ6NzEyMi8lRTklOTglQjMlRTUlODUlODklRTclOTQlQjUlRTUlQkQlQjF3d3cueWdkeTguY29tLiVFNSVBRiVCQiVFNiVBMiVBNiVFNyU4RSVBRiVFNiVCOCVCOCVFOCVBRSVCMC5CRC43MjBwLiVFNSU5QiVCRCVFOCU4QiVCMSVFNSU4RiU4QyVFOCVBRiVBRCVFNSU4RiU4QyVFNSVBRCU5Ny5ta3ZaWg==" };
    //cout << base64_decode( test_String1 ) << endl;
    //string test_String2{ "QUFmdHA6Ly95Z2R5ODp5Z2R5OEB5ZzQ1LmR5ZHl0dC5uZXQ6ODExNi9bJUU5JTk4JUIzJUU1JTg1JTg5JUU3JTk0JUI1JUU1JUJEJUIxd3d3LnlnZHk4Lm5ldF0lRTUlQUYlQkIlRTUlQTQlQTIlRTclOTIlQjAlRTYlQjglQjglRTglQUUlQjAuSEQuNzIwcC4lRTUlOUIlQkQlRTglOEIlQjElRTUlOEYlOEMlRTglQUYlQUQlRTQlQjglQUQlRTUlQUQlOTcubWt2Wlo=" };
    //cout << base64_decode( test_String2 ) << endl;
    
    
    string test_String{ 
        "QUFmdHA6Ly9kOmRAZHlnb2RqOC5jb206MTIzMTEvW+eUteW9seW"\
        "kqeWggnd3dy5keTIwMTguY29tXeWvu+aipueOr+a4uOiusEJE5L"\
        "it6Iux5Y+M5a2XLm1wNFpa" };
    string test1{ "QUFmdHA6Ly9kOmRAZHlnb2RqOC5jb206MTIzMTEvW+eUteW9seWkqeWggnd3dy5keTIwMTguY29tXeWNjuebm+mhv+mCruaKpUJE5Lit6Iux5Y+M5a2XLm1wNFpa" };
    cout << base64_decode( test1 ) << endl;
    
    getchar( );
    return 0;
}