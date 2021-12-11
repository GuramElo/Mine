#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
map<string,double>B{
{"C4",261.6},{"C5",523.3},
{"D4",293.7},{"D5",587.3},{"E4",329.6},
{"E5",659.3},{"F5",698.5},{"G5",784.0}};
string A[]{"E5","E5","E5","sleep","E5","E5","E5","sleep",
"E5","G5","C5","D5","E5","C4","D4","E4","F5","F5","F5","sleep",
"F5","E5","E5","sleep","E5","D5","D5","E5","D5","sleep","G5","sleep"};
main(){
top:
for(int b=0;b<34;b++){
    if(A[b]!="sleep")Beep(B[A[b]],400);
    else Sleep(500);
   // cout<<A[b]<<endl;
}
goto top;
}
