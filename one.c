#include <stdio.h>
#include <errno.h>
#include <stdarg.h>
#include <stdlib.h>

#include "sysdeps.h"

int   adb_trace_mask;
int HOST = 0;

ADB_MUTEX_DEFINE( D_lock );

void fatal_errno(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "error: %s: ", strerror(errno));
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, "\n");
    va_end(ap);
    exit(-1);
}

void fatal(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "error: ");
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, "\n");
    va_end(ap);
    exit(-1);
}

void*get_apacket(void)
{
    return NULL;
}

void put_apacket(void *p)
{
}

void adb_auth_verified(void *t)
{
}

void send_auth_request(void *t)
{
}

int qemu_pipe_open(void* con_name)
{
    return 0;
}

void handle_packet(void *p, void *t) { }

void property_get(const char* name, char* getname, char* def)
{
    printf("name:%s\n",name);
}
int property_set(const char *key, const char *value)
{
    return 0;
}
int backup_service(void* op, char* args) { return 0; }

int main()
{
    return 0;
}
