/////////////////////////////////////////////////////////////////////////////
// Name:        types.h                                                    
// Purpose:     Type definitation for Nexg                                 
// Author:      Ichinose0                                                  
// Created:     2024-04-18                                                 
/////////////////////////////////////////////////////////////////////////////

#pragma once

typedef unsigned char uint_8;
typedef unsigned int NID;

typedef NID NxResult;

typedef struct Instance Instance;

typedef Instance* NxInstance;

#define NX_SUCCESS                        0x00000000
#define NX_ERROR_INVALID_COMMAND          0x00000001