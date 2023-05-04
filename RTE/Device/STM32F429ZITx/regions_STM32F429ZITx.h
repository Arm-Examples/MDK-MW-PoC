#ifndef REGIONS_STM32F429ZITX_H
#define REGIONS_STM32F429ZITX_H


//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

// <h>ROM Configuration
// =======================
// <h> IROM1
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x08000000
#define __ROM0_BASE 0x08000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00200000
#define __ROM0_SIZE 0x00200000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __ROM0_DEFAULT 1
//   <q>Startup
//   <i> Selects region to be used for startup code.
#define __ROM0_STARTUP 1
// </h>

// </h>

// <h>RAM Configuration
// =======================
// <h> IRAM1
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x20000000
#define __ROM0_BASE 0x20000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00030000
#define __ROM0_SIZE 0x00030000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __ROM0_DEFAULT 1
//   <q>No zero initialize
//   <i> Excludes region from zero initialization.
#define __ROM0_NOINIT 0
// </h>

// <h> IRAM2
//   <o> Base address <0x0-0xFFFFFFFF:8>
//   <i> Defines base address of memory region.
//   <i> Default: 0x10000000
#define __ROM1_BASE 0x10000000
//   <o> Region size [bytes] <0x0-0xFFFFFFFF:8>
//   <i> Defines size of memory region.
//   <i> Default: 0x00010000
#define __ROM1_SIZE 0x00010000
//   <q>Default region
//   <i> Enables memory region globally for the application.
#define __ROM1_DEFAULT 0
//   <q>No zero initialize
//   <i> Excludes region from zero initialization.
#define __ROM1_NOINIT 0
// </h>

// </h>


#endif /* REGIONS_STM32F429ZITX_H */
