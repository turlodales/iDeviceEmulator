#ifndef PRIMECELL_H
#define PRIMECELL_H

/* Declarations for ARM PrimeCell based periperals.  */
/* Also includes some devices that are currently only used by the
   ARM boards.  */

/* pl080.c */
void *pl080_init(uint32_t base, qemu_irq irq, int nchannels);

/* pl192.c */
DeviceState *pl192_init(target_phys_addr_t base,
                        int instance, ...);
void pl192_chain(void *first, void *next);

/* arm_sysctl.c */
void arm_sysctl_init(uint32_t base, uint32_t sys_id, uint32_t proc_id);

/* arm_sysctl GPIO lines */
#define ARM_SYSCTL_GPIO_MMC_WPROT 0
#define ARM_SYSCTL_GPIO_MMC_CARDIN 1

#endif