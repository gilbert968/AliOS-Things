/*
 * rx65n_macio.h
 *
 *  Created on: 2018年3月21日
 *      Author: gilbe
 */

#ifndef PLATFORM_MCU_R5F565NE_RX65N_MACRO_H_
#define PLATFORM_MCU_R5F565NE_RX65N_MACRO_H_

#define SYSINFO_OS_VERSION "APP-1.0.3"
#define SYSINFO_PRODUCT_MODEL "ALI_AOS_RX65"
#define SYSINFO_DEVICE_NAME "RX65N"
#define SYSINFO_KERNEL_VERSION "AOS-R-1.3.1"
#define SYSINFO_APP_VERSION "APP-1.1.3"
#define AOS_WEAK
#define AOS_packed
#define __FUNCTION__ __func__
#define CONFIG_GUIDER_AUTH_TIMEOUT  (10 * 1000)
#define UTILS_EVENT	//if not define it ,awss_reset.c  will not  include the iot_export_event.h
#define NET_WITH_WIFI //if not define it , netmgr_wifi.c will not include netmgr_wifi.h
#define MCU_FAMILY "mcu_r5f565ne"
#define BUILD_AOS
#define DEBUG_CONFIG_ERRDUMP  0
#define MBEDTLS_CONFIG_FILE "rx_mbedtls_config.h"
#define	CONFIG_PLAT_AOS
#define	UTILS_SHA256
#define	UTILS_HTTPC
#define	UTILS_MD5
#define	UTILS_JSON_PARSER
#define	UTILS_STRING
//#define renesas_03 1 //test device 01
#endif /* PLATFORM_MCU_R5F565NE_RX65N_MACRO_H_ */
