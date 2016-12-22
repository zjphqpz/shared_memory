#ifndef SHARED_MEMORY_H
#define SHARED_MEMORY_H

const key_t SHM_KEY = 0x18;
const key_t SEM_KEY = 0x19;

const int MAX_NAME_LENGTH = 10;
const int MAX_FILE_SIZE = 1000;
const int MAX_FILE_NUMBER = 10;
const int MAX_BLOCK_NUMBER = 4;

enum CommantType
{
	APPLY,
	RELEASE,
	GET,
	PUT,
	SHOW
};

struct Command_t
{
	uint8_t type;
	pid_t pid;
	bool hasError;
	int request;
};

struct Information_t
{
	short sizeOfBlocks;
};

struct File_t
{
	char name[MAX_NAME_LENGTH+1];
	char data[ MAX_FILE_SIZE ];
};

#endif
