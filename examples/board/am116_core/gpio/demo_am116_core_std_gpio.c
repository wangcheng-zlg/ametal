/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/
/**
 * \file
 * \brief GPIO 例程，通过标准接口实现
 *
 * - 操作步骤：
 *   1. 将 J14 的 KEY 和 PIOA_8 短接在一起。
 *
 * - 实验现象：
 *   1. 按一次按键 LED0 灯熄灭，再按一次按键 LED0 灯亮，如此反复。
 *
 * \note
 *    LED0 需要短接 J9 跳线帽，才能被 PIOB_1 控制。
 *
 * \par 源代码
 * \snippet demo_am116_core_std_gpio.c src_am116_core_std_gpio
 *
 * \internal
 * \par Modification History
 * - 1.00 17-04-15  nwt, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_am116_core_std_gpio
 * \copydoc demo_am116_core_std_gpio.c
 */

/** [src_am116_core_std_gpio] */
#include "ametal.h"
#include "am_vdebug.h"
#include "am_zlg116.h"
#include "demo_std_entries.h"

#define INPUT_PIN  PIOA_8 /**< \brief 输入引脚 */
#define OUTPUT_PIN PIOB_1 /**< \brief 输出引脚 */

/**
 * \brief 例程入口
 */
void demo_am116_core_std_gpio_entry (void)
{
    AM_DBG_INFO("demo am116_core std gpio!\r\n");

    demo_std_gpio_entry(INPUT_PIN, OUTPUT_PIN);
}
/** [src_am116_core_std_gpio] */

/* end of file */
