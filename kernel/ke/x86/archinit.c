/*++

Copyright (c) 2012 Minoca Corp. All Rights Reserved

Module Name:

    archinit.c

Abstract:

    This module implements kernel executive initialization routines specific
    to the x86 architecture.

Author:

    Evan Green 27-Sep-2012

Environment:

    Kernel

--*/

//
// ------------------------------------------------------------------- Includes
//

#include <minoca/kernel/kernel.h>
#include <minoca/kernel/bootload.h>
#include <minoca/kernel/x86.h>

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
KepArchInitialize (
    PKERNEL_INITIALIZATION_BLOCK Parameters,
    ULONG Phase
    )

/*++

Routine Description:

    This routine performs architecture-specific initialization for the kernel
    executive.

Arguments:

    Parameters - Supplies a pointer to the kernel initialization parameters
        from the loader.

    Phase - Supplies the initialization phase.

Return Value:

    Status code.

--*/

{

    return STATUS_SUCCESS;
}

//
// --------------------------------------------------------- Internal Functions
//

