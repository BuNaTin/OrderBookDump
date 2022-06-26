#pragma once

// CE_ prefix means all macro is for ce() function
// First 5 (1-5) err codes are reserved for support legacy (or lazy)

// use 0 as OK status code
#define CE_OK 0

// calls when args od function are unaviable
#define CE_WRONG_INPUT 6

// calls when pointer, with whom to work is non init
#define CE_NULL_PTR 7

// calls when has calculation error
#define CE_CALC 8

char ce(char err_code);
