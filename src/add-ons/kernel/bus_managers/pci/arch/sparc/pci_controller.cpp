/*
 * Copyright 2006, Ingo Weinhold. All rights reserved.
 * Distributed under the terms of the MIT License.
 */


#include "pci_controller.h"

#include <arch_platform.h>

#include "pci_private.h"

#include "openfirmware/pci_openfirmware.h"


status_t
pci_controller_init(void)
{
	return sparc_openfirmware_pci_controller_init();
}


phys_addr_t
pci_ram_address(phys_addr_t physical_address_in_system_memory)
{
	return physical_address_in_system_memory;
}
