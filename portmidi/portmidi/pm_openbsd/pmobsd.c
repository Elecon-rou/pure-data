#include <stdlib.h>
#include "portmidi.h"
#include "pmutil.h"
#include "pminternal.h"

PmDeviceID pm_default_output_device_id = -1;
PmDeviceID pm_default_input_device_id = -1;

void pm_init()
{
    #ifdef PMSNDIO
        pm_sndio_init();
    #endif
    #ifdef PMNULL
        pm_obsdnull_init();
    #endif
}

void pm_term()
{
    #ifdef PMSNDIO
        pm_sndio_term();
    #endif
}

PmDeviceID Pm_GetDefaultInputDeviceID()
{
    Pm_Initialize();
    return pm_default_input_device_id;
}

PmDeviceID Pm_GetDefaultOutputDeviceID()
{
    Pm_Initialize();
    return pm_default_output_device_id;
}

void *pm_alloc(size_t s) { return malloc(s); }
void pm_free (void *ptr) { free(ptr); }