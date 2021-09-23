#pragma once
#define global static
#define internal static
#define persistent static

typedef char int8;
typedef short int16;
typedef int int32;
typedef long int64;
typedef bool bool32;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long uint64;

// TEMPORARY: debug only, to fix vscode highlighting
#ifndef DEBUG
#define DEBUG
#endif