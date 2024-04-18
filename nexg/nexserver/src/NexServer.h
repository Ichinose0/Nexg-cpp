#pragma once

#include <Nexg.h>

#include <stddef.h>

typedef struct NxServer {
    NID id;
} NxServer;

NxServer* NxCreateServer(); 