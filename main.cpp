#include "main.h"
/*
777
*/
int main(void)
{
	RS232_Communication* RS232 = new RS232_Communication;

	CString RS232_Message;

	RS232_Message.Format(_T("COM 16 Open"));

	RS232->RS232_115200_Open(16);

	while (1)
	{
		RS232->RS232_Send(RS232_Message, RS232_Message.GetLength());
		Sleep(1000);
		RS232->RS232_Read();
	}

	delete RS232;

	return 0;
}