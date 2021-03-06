/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_gclk_base.h>
#include <hpl_pm_base.h>

void system_init(void)
{
	init_mcu();

	// GPIO on PA02

	// Set pin direction to output
	gpio_set_pin_direction(toggle1, GPIO_DIRECTION_OUT);

	gpio_set_pin_level(toggle1,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	gpio_set_pin_function(toggle1, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA03

	// Set pin direction to output
	gpio_set_pin_direction(toggle2, GPIO_DIRECTION_OUT);

	gpio_set_pin_level(toggle2,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	gpio_set_pin_function(toggle2, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA07

	// Set pin direction to output
	gpio_set_pin_direction(toggle3, GPIO_DIRECTION_OUT);

	gpio_set_pin_level(toggle3,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	gpio_set_pin_function(toggle3, GPIO_PIN_FUNCTION_OFF);
}
