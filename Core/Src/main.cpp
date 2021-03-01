/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <iostream>
#include "TJ_MPU6050.h"
#include <stdarg.h>
#include "edge-impulse-sdk/classifier/ei_run_classifier.h"
using namespace std;
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
//Training_Phase OR Inference_Phase
#define Inference_Phase
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
CRC_HandleTypeDef hcrc;

I2C_HandleTypeDef hi2c1;

UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */
MPU_ConfigTypeDef myMpuConfig;
ScaledData_Def myAccelScaled, myGyroScaled;
char tx_buff[20]={0};
uint8_t Sizee;
//static float features[] = {
//		-570, 0, 909, -561, 0, 920, -536, 0, 912, -502, 0, 891, -471, 0, 901, -456, 0, 909, -415, 0, 922, -398, 0, 939, -357, 0, 932, -310, 0, 938, -259, 0, 949, -220, 0, 950, -164, 7, 935, -104, 20, 925, -44, 33, 935, -3, 53, 934, 0, 38, 934, 0, 49, 918, 42, 54, 902, 127, 46, 879, 182, 22, 865, 257, 16, 860, 305, 32, 867, 360, 37, 868, 415, 31, 852, 467, 0, 831, 496, 0, 827, 540, 0, 820, 571, 0, 817, 610, 0, 811, 642, 0, 800, 648, 0, 817, 638, 0, 813, 631, 0, 823, 613, 0, 833, 592, 0, 847, 580, 0, 832, 562, 0, 809, 541, 0, 818, 499, 0, 839, 473, 0, 834, 457, 0, 820, 449, 0, 808, 399, 0, 824, 349, 0, 823, 300, 0, 837, 240, 0, 845, 196, 0, 844, 101, 1, 847, 7, 28, 869, 0, 44, 908, 0, 21, 922, 0, 16, 890, 0, 5, 892, -45, 0, 914, -96, 1, 921, -123, 0, 929, -130, 1, 910, -172, 6, 914, -238, 6, 923, -300, 2, 925, -350, 17, 955, -369, 32, 958, -403, 36, 981, -468, 50, 981, -518, 68, 981, -544, 89, 981, -536, 73, 981, -532, 58, 974, -531, 33, 947, -512, 13, 926, -490, 0, 901, -479, 0, 891, -464, 0, 877, -454, 0, 892, -420, 0, 874, -359, 7, 868, -310, 23, 877, -274, 18, 881, -250, 36, 926, -226, 60, 956, -177, 72, 957, -92, 72, 938, -24, 49, 924, 0, 32, 913, 0, 26, 923, 7, 55, 931, 95, 77, 935, 161, 85, 924, 243, 84, 891, 317, 45, 863, 384, 0, 832, 451, 0, 800, 515, 0, 808, 545, 0, 790, 592, 0, 796, 639, 0, 787, 686, 0, 771, 726, 0, 756, 756, 0, 758, 757, 0, 757, 731, 0, 762, 705, -3, 755, 680, -4, 749, 640, 0, 778, 581, 0, 816, 568, 0, 826, 555, 0, 815, 519, 0, 821, 472, 0, 825, 415, 0, 849, 362, 0, 862, 331, 22, 863, 301, 61, 859, 257, 118, 873, 174, 123, 897, 93, 95, 895, 16, 34, 869, 0, 4, 862, 0, 0, 870, -30, 0, 896, -84, 0, 929, -102, 0, 946, -110, 0, 965, -81, 16, 922, -79, 34, 878, -151, 31, 873, -232, 8, 895, -290, 2, 911, -332, 11, 944, -359, 17, 937, -405, 17, 931, -459, 10, 924, -516, 19, 934, -554, 9, 950, -593, 0, 952, -599, 0, 927, -605, 0, 917, -593, 0, 910, -572, 0, 927, -544, 0, 917, -466, 0, 901, -413, 14, 884, -382, 12, 879, -385, 0, 868, -378, 0, 891, -366, 0, 904, -337, 0, 924, -310, 0, 927, -270, 0, 914, -202, 0, 931, -135, 0, 943, -96, 1, 930, -48, 13, 950, -6, 28, 940, 0, 17, 934
//};
float features[EI_CLASSIFIER_RAW_SAMPLE_COUNT*EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME] ={0};
uint16_t Buff_Indx=0;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_I2C1_Init(void);
static void MX_CRC_Init(void);
/* USER CODE BEGIN PFP */
//static void FtoS(float n, char* res, uint8_t afterpoint);
static int intToStr(int16_t x, char str[]);
static void reverse(char* str, int len);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
int get_feature_data(size_t offset, size_t length, float *out_ptr) {
    memcpy(out_ptr, features + offset, length * sizeof(float));
    return 0;
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */
  signal_t signal;
  signal.total_length = EI_CLASSIFIER_RAW_SAMPLE_COUNT*EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME;//sizeof(features) / sizeof(features[0]);
  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_I2C1_Init();
  MX_CRC_Init();
  /* USER CODE BEGIN 2 */
	//1. Initialise the MPU6050 module and I2C
	MPU6050_Init(&hi2c1);
	//2. Configure Accel and Gyro parameters
	myMpuConfig.Accel_Full_Scale = AFS_SEL_4g;
	myMpuConfig.ClockSource = Internal_8MHz;
	myMpuConfig.CONFIG_DLPF = DLPF_184A_188G_Hz;
	myMpuConfig.Gyro_Full_Scale = FS_SEL_500;
	myMpuConfig.Sleep_Mode_Bit = 0;  //1: sleep mode, 0: normal mode
	MPU6050_Config(&myMpuConfig);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

		    MPU6050_Get_Accel_Scale(&myAccelScaled);
		    MPU6050_Get_Gyro_Scale(&myGyroScaled);
		    HAL_Delay(10);
#ifdef Training_Phase
			Sizee= intToStr((int16_t)myAccelScaled.x,tx_buff);
	    	tx_buff[Sizee] = ',';
			Sizee += intToStr((int16_t)myAccelScaled.y,&tx_buff[Sizee+1]);
	    	tx_buff[++Sizee] = ',';
			Sizee += intToStr((int16_t)myAccelScaled.z,&tx_buff[Sizee+1]);
	    	tx_buff[++Sizee] = '\n';

	        HAL_UART_Transmit(&huart2,tx_buff,Sizee+1,10);
	        HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
#endif
#ifdef Inference_Phase
	        if(Buff_Indx >= EI_CLASSIFIER_RAW_SAMPLE_COUNT)
	        {
	        	signal.get_data =&get_feature_data;
	        	ei_impulse_result_t result;
	        	EI_IMPULSE_ERROR res = run_classifier(&signal, &result, true);
	        	Buff_Indx=0;
	        }
	        features[Buff_Indx*3]   = myAccelScaled.x;
	        features[Buff_Indx*3+1] = myAccelScaled.y;
	        features[Buff_Indx*3+2] = myAccelScaled.z;
	        Buff_Indx++;
#endif
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 4;
  RCC_OscInitStruct.PLL.PLLN = 100;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV8;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV4;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief CRC Initialization Function
  * @param None
  * @retval None
  */
static void MX_CRC_Init(void)
{

  /* USER CODE BEGIN CRC_Init 0 */

  /* USER CODE END CRC_Init 0 */

  /* USER CODE BEGIN CRC_Init 1 */

  /* USER CODE END CRC_Init 1 */
  hcrc.Instance = CRC;
  if (HAL_CRC_Init(&hcrc) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN CRC_Init 2 */

  /* USER CODE END CRC_Init 2 */

}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 100000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pin : PA0 */
  GPIO_InitStruct.Pin = GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PD12 PD13 PD14 PD15 */
  GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
static int intToStr(int16_t x, char str[])
{
    int i = 0;
    if(x == 0)
    {
    	str[0] = '0';
    	str[1] = '\0';
    	i = 1;
    }
    else
    {
      if(x<0)
       {
    	i=1;
    	str[0] = '-';
    	x *= -1;
       }
      while (x)
      {
        str[i++] = (x % 10) + '0';
         x = x / 10;
      }
      if(str[0] == '-')
      {
    	  reverse(&str[1], i-1);
      }
      else
      {
    	  reverse(str, i);
      }
      str[i] = '\0';
    }

    return i;
}
// Reverses a string 'str' of length 'len'
static void reverse(char* str, int len)
{
    int i = 0, j = len - 1, temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}



/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
