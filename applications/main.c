/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-05-16     shelton      first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include "drv_common.h"
#include "drv_gpio.h"

/* defined the led4 pin: pd15 */
#define LED4_PIN    GET_PIN(D, 15)

int main(void)
{
    /* set led4 pin mode to output */
    rt_pin_mode(LED4_PIN, PIN_MODE_OUTPUT);

    while (1)
    {
        rt_pin_write(LED4_PIN, PIN_LOW);
        rt_thread_mdelay(500);
        rt_pin_write(LED4_PIN, PIN_HIGH);
        rt_thread_mdelay(4500);
    }
}
