#include "stdlib.h"
#include "portmidi.h"
#include "pmutil.h"
#include "pminternal.h"
#include "string.h"
#include "porttime.h"
#include "pmsndio.h"

#include <sndio.h>

extern pm_fns_node pm_sndio_in_dictionary;

static PmError sndio_out_open(PmInternal *midi, void *driverInfo)
{
    return pmNoError;
}

static PmError sndio_out_close(PmInternal *midi)
{
    return pmNoError;
}

static PmError sndio_in_open(PmInternal *midi, void *driverInfo)
{
    return pmNoError;
}

static PmError sndio_in_close(PmInternal *midi)
{
    return pmNoError;
}

static PmError sndio_write_byte(PmInternal *midi, unsigned char byte, PmTimestamp timestamp)
{
    return pmNoError;
}

static PmError sndio_write_short(PmInternal *midi, PmEvent *event)
{
    return pmNoError;
}

static PmError sndio_write_flush(PmInternal *midi, PmTimestamp timestamp)
{
    return pmNoError;
}

static PmError sndio_abort(PmInternal *midi)
{
    return pmNoError;
}

static PmError sndio_has_host_error(PmInternal *midi)
{
    return pmNoError;
}

static void sndio_get_host_error(PmInternal *midi, char *msg, unsigned int len)
{
    return;
}

static PmError sndio_sysex()
{
    return pmNoError;
}

static PmTimestamp sndio_synchronize(PmInternal *midi)
{
    return 0;
}

static PmError sndio_poll(PmInternal *midi)
{
    return pmNoError;
}

PmError pm_sndio_init( void )
{
    return pmNoError;
}

void pm_sndio_term( void )
{
    return;
}

pm_fns_node pm_sndio_dictionary = 
{
    sndio_write_short,
    sndio_sysex,
    sndio_sysex,
    sndio_write_byte,
    sndio_write_short,
    sndio_write_flush,
    sndio_synchronize,
    sndio_out_open,
    sndio_abort,
    sndio_out_close,
    sndio_poll,
    sndio_has_host_error,
    sndio_get_host_error
};