#include <Nexg.h>
#include <NexServer.h>

NxServer* pMainServer = NULL;

NxResult NxStartServer() {
    if (pMainServer == NULL) {
        pMainServer = NxCreateServer();
        return NX_SUCCESS;
    } else {
        return NX_ERROR_INVALID_COMMAND;
    }
}