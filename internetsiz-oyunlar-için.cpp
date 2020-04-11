#include<iostream>
#include<Windows.h>

using namespace std;
DWORD processID;
DWORD //değiştirmek-istediğiniz-şey(mermi can vb.)= 0x(adres numarası);(örn: int ammo = 0x...);

int neye-çevirmek-istediğiniz = çevirilecek-sayı;//(örn: int newammo=200;)
int main() {
	HWND hwnd = FindWindowA(NULL, "//oyunun adı");
	
	if (hwnd == NULL) {
		cout << "Yok";
	}
	else {
		GetWindowThreadProcessId(hwnd, &processID);
		HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processID);
		WriteProcessMemory(pHandle, (LPVOID)değiştirmek-istediğiniz-şey , &neye-çevirmek-istediğiniz, sizeof(neye-çevirmek-istediğiniz), 0);
		
	}

	system("pause");
  }
