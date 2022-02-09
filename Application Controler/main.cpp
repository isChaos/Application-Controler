#include<windows.h>
using namespace std;
HWND Console = GetConsoleWindow();
LPCWSTR Message; LPCWSTR Title;
void Setup() {
	ShowWindow(Console, SW_HIDE);
	Message = (LPCWSTR)"Welcome to Application Controler!"; Title = (LPCWSTR)"Welcome";
	MessageBox(NULL, Message, Title, MB_OK | MB_ICONINFORMATION);
}
int main() {

}