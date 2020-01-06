#include <iostream>
#include <string.h>

using namespace std;

int Size;
char InputBuffer[101];
char OutputBuffer[101];
char XY;

int main()
{

    int TestCount;
    cin >> TestCount;

    for( int i = 0; i < TestCount ; i ++){

        string Input;
        int BufferCount = 0;
        memset(InputBuffer,0,sizeof(char) * 20);

        memset(OutputBuffer,0,sizeof(char) * 20);
        cin >> Input;

        strcpy(InputBuffer,Input.c_str());
        for(string::size_type i = 0; i < Input.size(); i++){
            if( (i%2) == 0){
                OutputBuffer[BufferCount] = InputBuffer[i];
                BufferCount++;
            }
        }
        for(string::size_type i = 0; i< Input.size(); i++){
            if( (i%2) == 1){
                OutputBuffer[BufferCount] = InputBuffer[i];
                BufferCount++;
            }
        }

        cout<<OutputBuffer<<endl;
    }

}

