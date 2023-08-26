/******************************************************************************
 *
 * Module: Common - Platform Abstraction
 *
 * File Name: Platform_Types.h
 *
 * Author: khalid alazouni
 *
 *******************************************************************************/

#ifndef Platfor_Types_
#define Platfor_Types_

/*
 * CPU register definition
 */
#define CPU_TYPE_8                                  (8U)
#define CPU_TYPE_16                                 (16U)
#define CPU_TYPE_32                                 (32U)

/*
 * Bit order definition
 */
#define MSB_FIRST                   (0u)
#define LSB_FIRST                   (1u)


 /*
 * Platform specification
 */
#define CPU_TYPE            CPU_TYPE_32
#define CPU_BIT_ORDER       LSB_FIRST
#define CPU_BYTE_ORDER      LOW_BYTE_FIRST


/*
 * Byte order definition
 */
#define HIGH_BYTE_FIRST             (0u)
#define LOW_BYTE_FIRST              (1u)



/*
 * Boolean Values
 */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif


typedef unsigned char         boolean;

typedef signed char           sint8;
typedef  unsigned char         uint8;
typedef signed short          sint16;
typedef unsigned short        uint16;
typedef signed long           sint32;
typedef unsigned long         uint32;
typedef signed long long      sint64;
typedef unsigned long long    uint64;
typedef float                 float32;
typedef double                float64;

typedef volatile signed char        vsint8;
typedef volatile unsigned char      vuint8;

typedef volatile signed short       vsint16;
typedef volatile unsigned short     vuint16;

typedef volatile signed long        vsint32;
typedef volatile unsigned long      vuint32;

typedef volatile signed long long   vsint64;
typedef volatile unsigned long long vuint64;

typedef void*                       voidptr;
typedef const void*                 constvoidptr;

#endif /* PLATFORM_TYPES_H */
