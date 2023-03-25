#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * write_buffer - function to call write
 *
 * @message: constant parameter
 * Return: nothing
 */
void write_buffer(const char *message)
{
	static char buffer[1024];
	static int bufferpos;
	int messagelen = strlen(message);

	if (bufferpos + messagelen > 1024)
	{
		write(1, buffer, bufferpos);
		bufferpos = 0;
	}
	memcpy(buffer + bufferpos, message, messagelen);
	bufferpos += messagelen;
}


