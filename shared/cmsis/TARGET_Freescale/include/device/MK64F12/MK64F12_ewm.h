/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_EWM_REGISTERS_H__
#define __HW_EWM_REGISTERS_H__

#include "regs.h"

/*
 * MK64F12 EWM
 *
 * External Watchdog Monitor
 *
 * Registers defined in this header file:
 * - HW_EWM_CTRL - Control Register
 * - HW_EWM_SERV - Service Register
 * - HW_EWM_CMPL - Compare Low Register
 * - HW_EWM_CMPH - Compare High Register
 *
 * - hw_ewm_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_EWM_BASE
#define HW_EWM_INSTANCE_COUNT (1U) //!< Number of instances of the EWM module.
#define REGS_EWM_BASE (0x40061000U) //!< Base address for EWM.
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_EWM_CTRL - Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EWM_CTRL - Control Register (RW)
 *
 * Reset value: 0x00U
 *
 * The CTRL register is cleared by any reset. INEN, ASSIN and EWMEN bits can be
 * written once after a CPU reset. Modifying these bits more than once, generates
 * a bus transfer error.
 */
typedef union _hw_ewm_ctrl
{
    uint8_t U;
    struct _hw_ewm_ctrl_bitfields
    {
        uint8_t EWMEN : 1;             //!< [0] EWM enable.
        uint8_t ASSIN : 1;             //!< [1] EWM_in's Assertion State Select.
        uint8_t INEN : 1;              //!< [2] Input Enable.
        uint8_t INTEN : 1;             //!< [3] Interrupt Enable.
        uint8_t RESERVED0 : 4;         //!< [7:4]
    } B;
} hw_ewm_ctrl_t;
#endif

/*!
 * @name Constants and macros for entire EWM_CTRL register
 */
//@{
#define HW_EWM_CTRL_ADDR         (REGS_EWM_BASE + 0x0U)

#ifndef __LANGUAGE_ASM__
#define HW_EWM_CTRL              (*(__IO hw_ewm_ctrl_t *) HW_EWM_CTRL_ADDR)
#define HW_EWM_CTRL_RD()         (HW_EWM_CTRL.U)
#define HW_EWM_CTRL_WR(v)        (HW_EWM_CTRL.U = (v))
#define HW_EWM_CTRL_SET(v)       (HW_EWM_CTRL_WR(HW_EWM_CTRL_RD() |  (v)))
#define HW_EWM_CTRL_CLR(v)       (HW_EWM_CTRL_WR(HW_EWM_CTRL_RD() & ~(v)))
#define HW_EWM_CTRL_TOG(v)       (HW_EWM_CTRL_WR(HW_EWM_CTRL_RD() ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual EWM_CTRL bitfields
 */

/*!
 * @name Register EWM_CTRL, field EWMEN[0] (RW)
 *
 * This bit when set, enables the EWM module. This resets the EWM counter to
 * zero and deasserts the EWM_out signal. Clearing EWMEN bit disables the EWM, and
 * therefore it cannot be enabled until a reset occurs, due to the write-once
 * nature of this bit.
 */
//@{
#define BP_EWM_CTRL_EWMEN    (0U)          //!< Bit position for EWM_CTRL_EWMEN.
#define BM_EWM_CTRL_EWMEN    (0x01U)       //!< Bit mask for EWM_CTRL_EWMEN.
#define BS_EWM_CTRL_EWMEN    (1U)          //!< Bit field size in bits for EWM_CTRL_EWMEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the EWM_CTRL_EWMEN field.
#define BR_EWM_CTRL_EWMEN    (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR, BP_EWM_CTRL_EWMEN))
#endif

//! @brief Format value for bitfield EWM_CTRL_EWMEN.
#define BF_EWM_CTRL_EWMEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_EWM_CTRL_EWMEN), uint8_t) & BM_EWM_CTRL_EWMEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EWMEN field to a new value.
#define BW_EWM_CTRL_EWMEN(v) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR, BP_EWM_CTRL_EWMEN) = (v))
#endif
//@}

/*!
 * @name Register EWM_CTRL, field ASSIN[1] (RW)
 *
 * Default assert state of the EWM_in signal is logic zero. Setting ASSIN bit
 * inverts the assert state to a logic one.
 */
//@{
#define BP_EWM_CTRL_ASSIN    (1U)          //!< Bit position for EWM_CTRL_ASSIN.
#define BM_EWM_CTRL_ASSIN    (0x02U)       //!< Bit mask for EWM_CTRL_ASSIN.
#define BS_EWM_CTRL_ASSIN    (1U)          //!< Bit field size in bits for EWM_CTRL_ASSIN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the EWM_CTRL_ASSIN field.
#define BR_EWM_CTRL_ASSIN    (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR, BP_EWM_CTRL_ASSIN))
#endif

//! @brief Format value for bitfield EWM_CTRL_ASSIN.
#define BF_EWM_CTRL_ASSIN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_EWM_CTRL_ASSIN), uint8_t) & BM_EWM_CTRL_ASSIN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASSIN field to a new value.
#define BW_EWM_CTRL_ASSIN(v) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR, BP_EWM_CTRL_ASSIN) = (v))
#endif
//@}

/*!
 * @name Register EWM_CTRL, field INEN[2] (RW)
 *
 * This bit when set, enables the EWM_in port.
 */
//@{
#define BP_EWM_CTRL_INEN     (2U)          //!< Bit position for EWM_CTRL_INEN.
#define BM_EWM_CTRL_INEN     (0x04U)       //!< Bit mask for EWM_CTRL_INEN.
#define BS_EWM_CTRL_INEN     (1U)          //!< Bit field size in bits for EWM_CTRL_INEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the EWM_CTRL_INEN field.
#define BR_EWM_CTRL_INEN     (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR, BP_EWM_CTRL_INEN))
#endif

//! @brief Format value for bitfield EWM_CTRL_INEN.
#define BF_EWM_CTRL_INEN(v)  (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_EWM_CTRL_INEN), uint8_t) & BM_EWM_CTRL_INEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the INEN field to a new value.
#define BW_EWM_CTRL_INEN(v)  (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR, BP_EWM_CTRL_INEN) = (v))
#endif
//@}

/*!
 * @name Register EWM_CTRL, field INTEN[3] (RW)
 *
 * This bit when set and EWM_out is asserted, an interrupt request is generated.
 * To de-assert interrupt request, user should clear this bit by writing 0.
 */
//@{
#define BP_EWM_CTRL_INTEN    (3U)          //!< Bit position for EWM_CTRL_INTEN.
#define BM_EWM_CTRL_INTEN    (0x08U)       //!< Bit mask for EWM_CTRL_INTEN.
#define BS_EWM_CTRL_INTEN    (1U)          //!< Bit field size in bits for EWM_CTRL_INTEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the EWM_CTRL_INTEN field.
#define BR_EWM_CTRL_INTEN    (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR, BP_EWM_CTRL_INTEN))
#endif

//! @brief Format value for bitfield EWM_CTRL_INTEN.
#define BF_EWM_CTRL_INTEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_EWM_CTRL_INTEN), uint8_t) & BM_EWM_CTRL_INTEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the INTEN field to a new value.
#define BW_EWM_CTRL_INTEN(v) (BITBAND_ACCESS8(HW_EWM_CTRL_ADDR, BP_EWM_CTRL_INTEN) = (v))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_EWM_SERV - Service Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EWM_SERV - Service Register (WO)
 *
 * Reset value: 0x00U
 *
 * The SERV register provides the interface from the CPU to the EWM module. It
 * is write-only and reads of this register return zero.
 */
typedef union _hw_ewm_serv
{
    uint8_t U;
    struct _hw_ewm_serv_bitfields
    {
        uint8_t SERVICE : 8;           //!< [7:0]
    } B;
} hw_ewm_serv_t;
#endif

/*!
 * @name Constants and macros for entire EWM_SERV register
 */
//@{
#define HW_EWM_SERV_ADDR         (REGS_EWM_BASE + 0x1U)

#ifndef __LANGUAGE_ASM__
#define HW_EWM_SERV              (*(__O hw_ewm_serv_t *) HW_EWM_SERV_ADDR)
#define HW_EWM_SERV_WR(v)        (HW_EWM_SERV.U = (v))
#endif
//@}

/*
 * Constants & macros for individual EWM_SERV bitfields
 */

/*!
 * @name Register EWM_SERV, field SERVICE[7:0] (WORZ)
 *
 * The EWM service mechanism requires the CPU to write two values to the SERV
 * register: a first data byte of 0xB4, followed by a second data byte of 0x2C. The
 * EWM service is illegal if either of the following conditions is true. The
 * first or second data byte is not written correctly. The second data byte is not
 * written within a fixed number of peripheral bus cycles of the first data byte.
 * This fixed number of cycles is called EWM_service_time.
 */
//@{
#define BP_EWM_SERV_SERVICE  (0U)          //!< Bit position for EWM_SERV_SERVICE.
#define BM_EWM_SERV_SERVICE  (0xFFU)       //!< Bit mask for EWM_SERV_SERVICE.
#define BS_EWM_SERV_SERVICE  (8U)          //!< Bit field size in bits for EWM_SERV_SERVICE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the EWM_SERV_SERVICE field.
#define BR_EWM_SERV_SERVICE  (HW_EWM_SERV.B.SERVICE)
#endif

//! @brief Format value for bitfield EWM_SERV_SERVICE.
#define BF_EWM_SERV_SERVICE(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_EWM_SERV_SERVICE), uint8_t) & BM_EWM_SERV_SERVICE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SERVICE field to a new value.
#define BW_EWM_SERV_SERVICE(v) (HW_EWM_SERV_WR((HW_EWM_SERV_RD() & ~BM_EWM_SERV_SERVICE) | BF_EWM_SERV_SERVICE(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_EWM_CMPL - Compare Low Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EWM_CMPL - Compare Low Register (RW)
 *
 * Reset value: 0x00U
 *
 * The CMPL register is reset to zero after a CPU reset. This provides no
 * minimum time for the CPU to service the EWM counter. This register can be written
 * only once after a CPU reset. Writing this register more than once generates a
 * bus transfer error.
 */
typedef union _hw_ewm_cmpl
{
    uint8_t U;
    struct _hw_ewm_cmpl_bitfields
    {
        uint8_t COMPAREL : 8;          //!< [7:0]
    } B;
} hw_ewm_cmpl_t;
#endif

/*!
 * @name Constants and macros for entire EWM_CMPL register
 */
//@{
#define HW_EWM_CMPL_ADDR         (REGS_EWM_BASE + 0x2U)

#ifndef __LANGUAGE_ASM__
#define HW_EWM_CMPL              (*(__IO hw_ewm_cmpl_t *) HW_EWM_CMPL_ADDR)
#define HW_EWM_CMPL_RD()         (HW_EWM_CMPL.U)
#define HW_EWM_CMPL_WR(v)        (HW_EWM_CMPL.U = (v))
#define HW_EWM_CMPL_SET(v)       (HW_EWM_CMPL_WR(HW_EWM_CMPL_RD() |  (v)))
#define HW_EWM_CMPL_CLR(v)       (HW_EWM_CMPL_WR(HW_EWM_CMPL_RD() & ~(v)))
#define HW_EWM_CMPL_TOG(v)       (HW_EWM_CMPL_WR(HW_EWM_CMPL_RD() ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual EWM_CMPL bitfields
 */

/*!
 * @name Register EWM_CMPL, field COMPAREL[7:0] (RW)
 *
 * To prevent runaway code from changing this field, software should write to
 * this field after a CPU reset even if the (default) minimum service time is
 * required.
 */
//@{
#define BP_EWM_CMPL_COMPAREL (0U)          //!< Bit position for EWM_CMPL_COMPAREL.
#define BM_EWM_CMPL_COMPAREL (0xFFU)       //!< Bit mask for EWM_CMPL_COMPAREL.
#define BS_EWM_CMPL_COMPAREL (8U)          //!< Bit field size in bits for EWM_CMPL_COMPAREL.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the EWM_CMPL_COMPAREL field.
#define BR_EWM_CMPL_COMPAREL (HW_EWM_CMPL.B.COMPAREL)
#endif

//! @brief Format value for bitfield EWM_CMPL_COMPAREL.
#define BF_EWM_CMPL_COMPAREL(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_EWM_CMPL_COMPAREL), uint8_t) & BM_EWM_CMPL_COMPAREL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COMPAREL field to a new value.
#define BW_EWM_CMPL_COMPAREL(v) (HW_EWM_CMPL_WR((HW_EWM_CMPL_RD() & ~BM_EWM_CMPL_COMPAREL) | BF_EWM_CMPL_COMPAREL(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_EWM_CMPH - Compare High Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EWM_CMPH - Compare High Register (RW)
 *
 * Reset value: 0xFFU
 *
 * The CMPH register is reset to 0xFF after a CPU reset. This provides a maximum
 * of 256 clocks time, for the CPU to service the EWM counter. This register can
 * be written only once after a CPU reset. Writing this register more than once
 * generates a bus transfer error. The valid values for CMPH are up to 0xFE
 * because the EWM counter never expires when CMPH = 0xFF. The expiration happens only
 * if EWM counter is greater than CMPH.
 */
typedef union _hw_ewm_cmph
{
    uint8_t U;
    struct _hw_ewm_cmph_bitfields
    {
        uint8_t COMPAREH : 8;          //!< [7:0]
    } B;
} hw_ewm_cmph_t;
#endif

/*!
 * @name Constants and macros for entire EWM_CMPH register
 */
//@{
#define HW_EWM_CMPH_ADDR         (REGS_EWM_BASE + 0x3U)

#ifndef __LANGUAGE_ASM__
#define HW_EWM_CMPH              (*(__IO hw_ewm_cmph_t *) HW_EWM_CMPH_ADDR)
#define HW_EWM_CMPH_RD()         (HW_EWM_CMPH.U)
#define HW_EWM_CMPH_WR(v)        (HW_EWM_CMPH.U = (v))
#define HW_EWM_CMPH_SET(v)       (HW_EWM_CMPH_WR(HW_EWM_CMPH_RD() |  (v)))
#define HW_EWM_CMPH_CLR(v)       (HW_EWM_CMPH_WR(HW_EWM_CMPH_RD() & ~(v)))
#define HW_EWM_CMPH_TOG(v)       (HW_EWM_CMPH_WR(HW_EWM_CMPH_RD() ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual EWM_CMPH bitfields
 */

/*!
 * @name Register EWM_CMPH, field COMPAREH[7:0] (RW)
 *
 * To prevent runaway code from changing this field, software should write to
 * this field after a CPU reset even if the (default) maximum service time is
 * required.
 */
//@{
#define BP_EWM_CMPH_COMPAREH (0U)          //!< Bit position for EWM_CMPH_COMPAREH.
#define BM_EWM_CMPH_COMPAREH (0xFFU)       //!< Bit mask for EWM_CMPH_COMPAREH.
#define BS_EWM_CMPH_COMPAREH (8U)          //!< Bit field size in bits for EWM_CMPH_COMPAREH.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the EWM_CMPH_COMPAREH field.
#define BR_EWM_CMPH_COMPAREH (HW_EWM_CMPH.B.COMPAREH)
#endif

//! @brief Format value for bitfield EWM_CMPH_COMPAREH.
#define BF_EWM_CMPH_COMPAREH(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint8_t) << BP_EWM_CMPH_COMPAREH), uint8_t) & BM_EWM_CMPH_COMPAREH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COMPAREH field to a new value.
#define BW_EWM_CMPH_COMPAREH(v) (HW_EWM_CMPH_WR((HW_EWM_CMPH_RD() & ~BM_EWM_CMPH_COMPAREH) | BF_EWM_CMPH_COMPAREH(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_ewm_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All EWM module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_ewm
{
    __IO hw_ewm_ctrl_t CTRL;               //!< [0x0] Control Register
    __O hw_ewm_serv_t SERV;                //!< [0x1] Service Register
    __IO hw_ewm_cmpl_t CMPL;               //!< [0x2] Compare Low Register
    __IO hw_ewm_cmph_t CMPH;               //!< [0x3] Compare High Register
} hw_ewm_t;
#pragma pack()

//! @brief Macro to access all EWM registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_EWM</code>.
#define HW_EWM         (*(hw_ewm_t *) REGS_EWM_BASE)
#endif

#endif // __HW_EWM_REGISTERS_H__
// v22/130726/0.9
// EOF
