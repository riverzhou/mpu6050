#ifndef _STM32_MPU6050_H_
#define _STM32_MPU6050_H_
/* The following functions must be defined for this platform:
 * i2c_write(unsigned char slave_addr, unsigned char reg_addr,
 *      unsigned char length, unsigned char const *data)
 * i2c_read(unsigned char slave_addr, unsigned char reg_addr,
 *      unsigned char length, unsigned char *data)
 * delay_ms(unsigned long num_ms)
 * get_ms(unsigned long *count)
 * reg_int_cb(void (*cb)(void), unsigned char port, unsigned char pin)
 * labs(long x)
 * fabsf(float x)
 * min(int a, int b)
 */

#include "delay.h"
#include "ioi2c.h"

#define i2c_write   	i2cWrite
#define i2c_read    	i2cRead
#define delay_ms    	delay_ms
#define get_ms(x)     	do {} while (0)
#define min(a,b) 	((a<b)?a:b)

//#define fabs        	fabsf
//#define log_e    	printf
//#define log_i   	printf

#endif

