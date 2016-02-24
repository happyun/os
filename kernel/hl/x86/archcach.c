/*++

Copyright (c) 2013 Minoca Corp. All Rights Reserved

Module Name:

    archcach.c

Abstract:

    This module implements architecture-specific cache support for the hardware
    library.

Author:

    Chris Stevens 13-Jan-2014

Environment:

    Kernel

--*/

//
// ------------------------------------------------------------------- Includes
//

#include <minoca/kernel/kernel.h>
#include <minoca/kernel/x86.h>
#include "../hlp.h"
#include "../cache.h"

//
// ---------------------------------------------------------------- Definitions
//

//
// ------------------------------------------------------ Data Type Definitions
//

//
// ----------------------------------------------- Internal Function Prototypes
//

//
// -------------------------------------------------------------------- Globals
//

//
// ------------------------------------------------------------------ Functions
//

KSTATUS
HlpArchInitializeCacheControllers (
    VOID
    )

/*++

Routine Description:

    This routine performs architecture-specific initialization for the cache
    subsystem.

Arguments:

    None.

Return Value:

    Status code.

--*/

{

    return STATUS_SUCCESS;
}

//
// --------------------------------------------------------- Internal Functions
//

