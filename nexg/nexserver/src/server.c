#include "NexServer.h"
#include "internal.h"

NxServer* NxCreateServer() {
    NxServer* pServer = malloc(sizeof(NxServer));
    pServer->id = genId();

    return pServer;
}