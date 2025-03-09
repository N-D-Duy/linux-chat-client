#include "service.h"
#include "session.h"
#include "log.h"


Service* createService(Session* session) {
    if (session == NULL) {
        return NULL;
    }
    
    Service* service = (Service*)malloc(sizeof(Service));
    if (service == NULL) {
        return NULL;
    }
    
    service->session = session;
    return service;
}

void destroyService(Service* service) {
    if (service != NULL) {
        free(service);
    }
}



void service_login_success(Service* service) {
    if (service == NULL) {
        return;
    }
    
    log_message(INFO, "Logged in successfully");
    
}