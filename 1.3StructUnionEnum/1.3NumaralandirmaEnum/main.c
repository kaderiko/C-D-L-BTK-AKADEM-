#include <stdio.h>
#include <stdlib.h>

//Enumarated: Numaralandırılmış.



enum Level
{
	Low,
	Medium,
	High
};





int main() 
{
	enum Level RoomTemp = High;
	
	printf("Oda Sicakligi: %d \n", RoomTemp);
	
	return 0;
}
