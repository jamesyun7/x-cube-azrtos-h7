/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    app_netxduo.h
  * @author  MCD Application Team
  * @brief   NetXDuo applicative header file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __APP_NETXDUO_H__
#define __APP_NETXDUO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "nx_api.h"

/* Private includes ----------------------------------------------------------*/

#include "nx_stm32_eth_driver.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define PRINT_ADDRESS(addr) do { \
                                    printf("%s: %lu.%lu.%lu.%lu \n", #addr, \
                                    (addr >> 24) & 0xff, \
                                    (addr >> 16) & 0xff, \
                                    (addr >> 8) & 0xff, \
                                     addr& 0xff);\
                                  }while(0)
/* USER CODE END EM */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Exported functions prototypes ---------------------------------------------*/
UINT App_NetXDuo_Init(VOID *memory_ptr);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */
/* Pirority IP creation */
#define DEFAULT_MEMORY_SIZE      1024
#define DEFAULT_PRIORITY         10
 /*Packet payload size */
#define PACKET_PAYLOAD_SIZE              1536
/* Packet pool size */
#define NX_PACKET_POOL_SIZE              ((1536 + sizeof(NX_PACKET)) * 60)
 /* APP Cache size  */
#define ARP_CACHE_SIZE                   1024
 /* Wait option for getting @IP */
#define WAIT_OPTION                      1000
/* Entry input for Main thread */
#define ENTRY_INPUT                      0
/* Main Thread priority */
#define THREAD_PRIO                      4
/* Main Thread preemption threshold */
#define THREAD_PREEMPT_THRESHOLD         4
/* Web application size */
#define WEB_APP_SIZE                     2048
/* Memory size */
#define MEMORY_SIZE                      2048
/* HTTP connection port */
#define CONNECTION_PORT                  80
/* Server packet size */
#define SERVER_PACKET_SIZE               (NX_WEB_HTTP_SERVER_MIN_PACKET_SIZE * 2)
/* Server stack */
#define SERVER_STACK                     4096
/* Server pool size */
#define SERVER_POOL_SIZE                 (SERVER_PACKET_SIZE * 4)
/* SD Driver information pointer */
#define SD_DRIVER_INFO_POINTER           0

#define NULL_IP_ADDRESS                  IP_ADDRESS(0,0,0,0)
/* USER CODE END Private defines */

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

#ifdef __cplusplus
 }
#endif
#endif /* __APP_NETXDUO_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
