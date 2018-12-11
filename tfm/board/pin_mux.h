/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features for the Ethernet.
 *
 */
void BOARD_InitENET(void);

/*! @name PORTE26 (number 33), LED_GREEN
  @{ */
#define BOARD_INITLEDS_LED_GREEN_GPIO GPIOE /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITLEDS_LED_GREEN_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITLEDS_LED_GREEN_PIN 26U    /*!<@brief PORTE pin index: 26 */
                                            /* @} */

/*! @name PORTB21 (number 67), LED_BLUE
  @{ */
#define BOARD_INITLEDS_LED_BLUE_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITLEDS_LED_BLUE_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITLEDS_LED_BLUE_PIN 21U    /*!<@brief PORTB pin index: 21 */
                                           /* @} */

/*! @name PORTB22 (number 68), LED_RED
  @{ */
#define BOARD_INITLEDS_LED_RED_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITLEDS_LED_RED_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITLEDS_LED_RED_PIN 22U    /*!<@brief PORTB pin index: 22 */
                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features for the LEDs.
 *
 */
void BOARD_InitLEDs(void);

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSerial(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
