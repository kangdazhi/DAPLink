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
#ifndef __HW_PIT_REGISTERS_H__
#define __HW_PIT_REGISTERS_H__

#include "regs.h"

/*
 * MKL46Z4 PIT
 *
 * Periodic Interrupt Timer
 *
 * Registers defined in this header file:
 * - HW_PIT_MCR - PIT Module Control Register
 * - HW_PIT_LTMR64H - PIT Upper Lifetime Timer Register
 * - HW_PIT_LTMR64L - PIT Lower Lifetime Timer Register
 * - HW_PIT_LDVALn - Timer Load Value Register
 * - HW_PIT_CVALn - Current Timer Value Register
 * - HW_PIT_TCTRLn - Timer Control Register
 * - HW_PIT_TFLGn - Timer Flag Register
 *
 * - hw_pit_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_PIT_BASE
#define HW_PIT_INSTANCE_COUNT (1U) //!< Number of instances of the PIT module.
#define REGS_PIT_BASE (0x40037000U) //!< Base address for PIT.
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_PIT_MCR - PIT Module Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_PIT_MCR - PIT Module Control Register (RW)
 *
 * Reset value: 0x00000002U
 *
 * This register enables or disables the PIT timer clocks and controls the
 * timers when the PIT enters the Debug mode.
 */
typedef union _hw_pit_mcr
{
    uint32_t U;
    struct _hw_pit_mcr_bitfields
    {
        uint32_t FRZ : 1;              //!< [0] Freeze
        uint32_t MDIS : 1;             //!< [1] Module Disable - (PIT section)
        uint32_t RESERVED0 : 30;       //!< [31:2]
    } B;
} hw_pit_mcr_t;
#endif

/*!
 * @name Constants and macros for entire PIT_MCR register
 */
//@{
#define HW_PIT_MCR_ADDR          (REGS_PIT_BASE + 0x0U)

#ifndef __LANGUAGE_ASM__
#define HW_PIT_MCR               (*(__IO hw_pit_mcr_t *) HW_PIT_MCR_ADDR)
#define HW_PIT_MCR_RD()          (HW_PIT_MCR.U)
#define HW_PIT_MCR_WR(v)         (HW_PIT_MCR.U = (v))
#define HW_PIT_MCR_SET(v)        (BME_OR32(HW_PIT_MCR_ADDR, (uint32_t)(v)))
#define HW_PIT_MCR_CLR(v)        (BME_AND32(HW_PIT_MCR_ADDR, (uint32_t)(~(v))))
#define HW_PIT_MCR_TOG(v)        (BME_XOR32(HW_PIT_MCR_ADDR, (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual PIT_MCR bitfields
 */

/*!
 * @name Register PIT_MCR, field FRZ[0] (RW)
 *
 * Allows the timers to be stopped when the device enters the Debug mode.
 *
 * Values:
 * - 0 - Timers continue to run in Debug mode.
 * - 1 - Timers are stopped in Debug mode.
 */
//@{
#define BP_PIT_MCR_FRZ       (0U)          //!< Bit position for PIT_MCR_FRZ.
#define BM_PIT_MCR_FRZ       (0x00000001U) //!< Bit mask for PIT_MCR_FRZ.
#define BS_PIT_MCR_FRZ       (1U)          //!< Bit field size in bits for PIT_MCR_FRZ.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_MCR_FRZ field.
#define BR_PIT_MCR_FRZ       (BME_UBFX32(HW_PIT_MCR_ADDR, BP_PIT_MCR_FRZ, BS_PIT_MCR_FRZ))
#endif

//! @brief Format value for bitfield PIT_MCR_FRZ.
#define BF_PIT_MCR_FRZ(v)    (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_PIT_MCR_FRZ), uint32_t) & BM_PIT_MCR_FRZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRZ field to a new value.
#define BW_PIT_MCR_FRZ(v)    (BME_BFI32(HW_PIT_MCR_ADDR, ((uint32_t)(v) << BP_PIT_MCR_FRZ), BP_PIT_MCR_FRZ, 1))
#endif
//@}

/*!
 * @name Register PIT_MCR, field MDIS[1] (RW)
 *
 * Disables the standard timers. This field must be enabled before any other
 * setup is done.
 *
 * Values:
 * - 0 - Clock for standard PIT timers is enabled.
 * - 1 - Clock for standard PIT timers is disabled.
 */
//@{
#define BP_PIT_MCR_MDIS      (1U)          //!< Bit position for PIT_MCR_MDIS.
#define BM_PIT_MCR_MDIS      (0x00000002U) //!< Bit mask for PIT_MCR_MDIS.
#define BS_PIT_MCR_MDIS      (1U)          //!< Bit field size in bits for PIT_MCR_MDIS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_MCR_MDIS field.
#define BR_PIT_MCR_MDIS      (BME_UBFX32(HW_PIT_MCR_ADDR, BP_PIT_MCR_MDIS, BS_PIT_MCR_MDIS))
#endif

//! @brief Format value for bitfield PIT_MCR_MDIS.
#define BF_PIT_MCR_MDIS(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_PIT_MCR_MDIS), uint32_t) & BM_PIT_MCR_MDIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MDIS field to a new value.
#define BW_PIT_MCR_MDIS(v)   (BME_BFI32(HW_PIT_MCR_ADDR, ((uint32_t)(v) << BP_PIT_MCR_MDIS), BP_PIT_MCR_MDIS, 1))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_PIT_LTMR64H - PIT Upper Lifetime Timer Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_PIT_LTMR64H - PIT Upper Lifetime Timer Register (RO)
 *
 * Reset value: 0x00000000U
 *
 * This register is intended for applications that chain timer 0 and timer 1 to
 * build a 64-bit lifetimer.
 */
typedef union _hw_pit_ltmr64h
{
    uint32_t U;
    struct _hw_pit_ltmr64h_bitfields
    {
        uint32_t LTH : 32;             //!< [31:0] Life Timer value
    } B;
} hw_pit_ltmr64h_t;
#endif

/*!
 * @name Constants and macros for entire PIT_LTMR64H register
 */
//@{
#define HW_PIT_LTMR64H_ADDR      (REGS_PIT_BASE + 0xE0U)

#ifndef __LANGUAGE_ASM__
#define HW_PIT_LTMR64H           (*(__I hw_pit_ltmr64h_t *) HW_PIT_LTMR64H_ADDR)
#define HW_PIT_LTMR64H_RD()      (HW_PIT_LTMR64H.U)
#endif
//@}

/*
 * Constants & macros for individual PIT_LTMR64H bitfields
 */

/*!
 * @name Register PIT_LTMR64H, field LTH[31:0] (RO)
 *
 * Shows the timer value of timer 1. If this register is read at a time t1,
 * LTMR64L shows the value of timer 0 at time t1.
 */
//@{
#define BP_PIT_LTMR64H_LTH   (0U)          //!< Bit position for PIT_LTMR64H_LTH.
#define BM_PIT_LTMR64H_LTH   (0xFFFFFFFFU) //!< Bit mask for PIT_LTMR64H_LTH.
#define BS_PIT_LTMR64H_LTH   (32U)         //!< Bit field size in bits for PIT_LTMR64H_LTH.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_LTMR64H_LTH field.
#define BR_PIT_LTMR64H_LTH   (BME_UBFX32(HW_PIT_LTMR64H_ADDR, BP_PIT_LTMR64H_LTH, BS_PIT_LTMR64H_LTH))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_PIT_LTMR64L - PIT Lower Lifetime Timer Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_PIT_LTMR64L - PIT Lower Lifetime Timer Register (RO)
 *
 * Reset value: 0x00000000U
 *
 * This register is intended for applications that chain timer 0 and timer 1 to
 * build a 64-bit lifetimer. To use LTMR64H and LTMR64L, timer 0 and timer 1 need
 * to be chained. To obtain the correct value, first read LTMR64H and then
 * LTMR64L. LTMR64H will have the value of CVAL1 at the time of the first access,
 * LTMR64L will have the value of CVAL0 at the time of the first access, therefore
 * the application does not need to worry about carry-over effects of the running
 * counter.
 */
typedef union _hw_pit_ltmr64l
{
    uint32_t U;
    struct _hw_pit_ltmr64l_bitfields
    {
        uint32_t LTL : 32;             //!< [31:0] Life Timer value
    } B;
} hw_pit_ltmr64l_t;
#endif

/*!
 * @name Constants and macros for entire PIT_LTMR64L register
 */
//@{
#define HW_PIT_LTMR64L_ADDR      (REGS_PIT_BASE + 0xE4U)

#ifndef __LANGUAGE_ASM__
#define HW_PIT_LTMR64L           (*(__I hw_pit_ltmr64l_t *) HW_PIT_LTMR64L_ADDR)
#define HW_PIT_LTMR64L_RD()      (HW_PIT_LTMR64L.U)
#endif
//@}

/*
 * Constants & macros for individual PIT_LTMR64L bitfields
 */

/*!
 * @name Register PIT_LTMR64L, field LTL[31:0] (RO)
 *
 * Shows the value of timer 0 at the time LTMR64H was last read. It will only
 * update if LTMR64H is read.
 */
//@{
#define BP_PIT_LTMR64L_LTL   (0U)          //!< Bit position for PIT_LTMR64L_LTL.
#define BM_PIT_LTMR64L_LTL   (0xFFFFFFFFU) //!< Bit mask for PIT_LTMR64L_LTL.
#define BS_PIT_LTMR64L_LTL   (32U)         //!< Bit field size in bits for PIT_LTMR64L_LTL.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_LTMR64L_LTL field.
#define BR_PIT_LTMR64L_LTL   (BME_UBFX32(HW_PIT_LTMR64L_ADDR, BP_PIT_LTMR64L_LTL, BS_PIT_LTMR64L_LTL))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_PIT_LDVALn - Timer Load Value Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_PIT_LDVALn - Timer Load Value Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These registers select the timeout period for the timer interrupts.
 */
typedef union _hw_pit_ldvaln
{
    uint32_t U;
    struct _hw_pit_ldvaln_bitfields
    {
        uint32_t TSV : 32;             //!< [31:0] Timer Start Value
    } B;
} hw_pit_ldvaln_t;
#endif

/*!
 * @name Constants and macros for entire PIT_LDVALn register
 */
//@{
#define HW_PIT_LDVALn_COUNT (2U)

#define HW_PIT_LDVALn_ADDR(n)    (REGS_PIT_BASE + 0x100U + (0x10U * n))

#ifndef __LANGUAGE_ASM__
#define HW_PIT_LDVALn(n)         (*(__IO hw_pit_ldvaln_t *) HW_PIT_LDVALn_ADDR(n))
#define HW_PIT_LDVALn_RD(n)      (HW_PIT_LDVALn(n).U)
#define HW_PIT_LDVALn_WR(n, v)   (HW_PIT_LDVALn(n).U = (v))
#define HW_PIT_LDVALn_SET(n, v)  (BME_OR32(HW_PIT_LDVALn_ADDR(n), (uint32_t)(v)))
#define HW_PIT_LDVALn_CLR(n, v)  (BME_AND32(HW_PIT_LDVALn_ADDR(n), (uint32_t)(~(v))))
#define HW_PIT_LDVALn_TOG(n, v)  (BME_XOR32(HW_PIT_LDVALn_ADDR(n), (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual PIT_LDVALn bitfields
 */

/*!
 * @name Register PIT_LDVALn, field TSV[31:0] (RW)
 *
 * Sets the timer start value. The timer will count down until it reaches 0,
 * then it will generate an interrupt and load this register value again. Writing a
 * new value to this register will not restart the timer; instead the value will
 * be loaded after the timer expires. To abort the current cycle and start a
 * timer period with the new value, the timer must be disabled and enabled again.
 */
//@{
#define BP_PIT_LDVALn_TSV    (0U)          //!< Bit position for PIT_LDVALn_TSV.
#define BM_PIT_LDVALn_TSV    (0xFFFFFFFFU) //!< Bit mask for PIT_LDVALn_TSV.
#define BS_PIT_LDVALn_TSV    (32U)         //!< Bit field size in bits for PIT_LDVALn_TSV.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_LDVALn_TSV field.
#define BR_PIT_LDVALn_TSV(n) (BME_UBFX32(HW_PIT_LDVALn_ADDR(n), BP_PIT_LDVALn_TSV, BS_PIT_LDVALn_TSV))
#endif

//! @brief Format value for bitfield PIT_LDVALn_TSV.
#define BF_PIT_LDVALn_TSV(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_PIT_LDVALn_TSV), uint32_t) & BM_PIT_LDVALn_TSV)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TSV field to a new value.
#define BW_PIT_LDVALn_TSV(n, v) (BME_BFI32(HW_PIT_LDVALn_ADDR(n), ((uint32_t)(v) << BP_PIT_LDVALn_TSV), BP_PIT_LDVALn_TSV, 32))
#endif
//@}
//-------------------------------------------------------------------------------------------
// HW_PIT_CVALn - Current Timer Value Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_PIT_CVALn - Current Timer Value Register (RO)
 *
 * Reset value: 0x00000000U
 *
 * These registers indicate the current timer position.
 */
typedef union _hw_pit_cvaln
{
    uint32_t U;
    struct _hw_pit_cvaln_bitfields
    {
        uint32_t TVL : 32;             //!< [31:0] Current Timer Value
    } B;
} hw_pit_cvaln_t;
#endif

/*!
 * @name Constants and macros for entire PIT_CVALn register
 */
//@{
#define HW_PIT_CVALn_COUNT (2U)

#define HW_PIT_CVALn_ADDR(n)     (REGS_PIT_BASE + 0x104U + (0x10U * n))

#ifndef __LANGUAGE_ASM__
#define HW_PIT_CVALn(n)          (*(__I hw_pit_cvaln_t *) HW_PIT_CVALn_ADDR(n))
#define HW_PIT_CVALn_RD(n)       (HW_PIT_CVALn(n).U)
#endif
//@}

/*
 * Constants & macros for individual PIT_CVALn bitfields
 */

/*!
 * @name Register PIT_CVALn, field TVL[31:0] (RO)
 *
 * Represents the current timer value, if the timer is enabled. If the timer is
 * disabled, do not use this field as its value is unreliable. The timer uses a
 * downcounter. The timer values are frozen in Debug mode if MCR[FRZ] is set.
 */
//@{
#define BP_PIT_CVALn_TVL     (0U)          //!< Bit position for PIT_CVALn_TVL.
#define BM_PIT_CVALn_TVL     (0xFFFFFFFFU) //!< Bit mask for PIT_CVALn_TVL.
#define BS_PIT_CVALn_TVL     (32U)         //!< Bit field size in bits for PIT_CVALn_TVL.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_CVALn_TVL field.
#define BR_PIT_CVALn_TVL(n)  (BME_UBFX32(HW_PIT_CVALn_ADDR(n), BP_PIT_CVALn_TVL, BS_PIT_CVALn_TVL))
#endif
//@}
//-------------------------------------------------------------------------------------------
// HW_PIT_TCTRLn - Timer Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_PIT_TCTRLn - Timer Control Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These register contain the control bits for each timer.
 */
typedef union _hw_pit_tctrln
{
    uint32_t U;
    struct _hw_pit_tctrln_bitfields
    {
        uint32_t TEN : 1;              //!< [0] Timer Enable
        uint32_t TIE : 1;              //!< [1] Timer Interrupt Enable
        uint32_t CHN : 1;              //!< [2] Chain Mode
        uint32_t RESERVED0 : 29;       //!< [31:3]
    } B;
} hw_pit_tctrln_t;
#endif

/*!
 * @name Constants and macros for entire PIT_TCTRLn register
 */
//@{
#define HW_PIT_TCTRLn_COUNT (2U)

#define HW_PIT_TCTRLn_ADDR(n)    (REGS_PIT_BASE + 0x108U + (0x10U * n))

#ifndef __LANGUAGE_ASM__
#define HW_PIT_TCTRLn(n)         (*(__IO hw_pit_tctrln_t *) HW_PIT_TCTRLn_ADDR(n))
#define HW_PIT_TCTRLn_RD(n)      (HW_PIT_TCTRLn(n).U)
#define HW_PIT_TCTRLn_WR(n, v)   (HW_PIT_TCTRLn(n).U = (v))
#define HW_PIT_TCTRLn_SET(n, v)  (BME_OR32(HW_PIT_TCTRLn_ADDR(n), (uint32_t)(v)))
#define HW_PIT_TCTRLn_CLR(n, v)  (BME_AND32(HW_PIT_TCTRLn_ADDR(n), (uint32_t)(~(v))))
#define HW_PIT_TCTRLn_TOG(n, v)  (BME_XOR32(HW_PIT_TCTRLn_ADDR(n), (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual PIT_TCTRLn bitfields
 */

/*!
 * @name Register PIT_TCTRLn, field TEN[0] (RW)
 *
 * Enables or disables the timer.
 *
 * Values:
 * - 0 - Timer n is disabled.
 * - 1 - Timer n is enabled.
 */
//@{
#define BP_PIT_TCTRLn_TEN    (0U)          //!< Bit position for PIT_TCTRLn_TEN.
#define BM_PIT_TCTRLn_TEN    (0x00000001U) //!< Bit mask for PIT_TCTRLn_TEN.
#define BS_PIT_TCTRLn_TEN    (1U)          //!< Bit field size in bits for PIT_TCTRLn_TEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_TCTRLn_TEN field.
#define BR_PIT_TCTRLn_TEN(n) (BME_UBFX32(HW_PIT_TCTRLn_ADDR(n), BP_PIT_TCTRLn_TEN, BS_PIT_TCTRLn_TEN))
#endif

//! @brief Format value for bitfield PIT_TCTRLn_TEN.
#define BF_PIT_TCTRLn_TEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_PIT_TCTRLn_TEN), uint32_t) & BM_PIT_TCTRLn_TEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TEN field to a new value.
#define BW_PIT_TCTRLn_TEN(n, v) (BME_BFI32(HW_PIT_TCTRLn_ADDR(n), ((uint32_t)(v) << BP_PIT_TCTRLn_TEN), BP_PIT_TCTRLn_TEN, 1))
#endif
//@}

/*!
 * @name Register PIT_TCTRLn, field TIE[1] (RW)
 *
 * When an interrupt is pending, or, TFLGn[TIF] is set, enabling the interrupt
 * will immediately cause an interrupt event. To avoid this, the associated
 * TFLGn[TIF] must be cleared first.
 *
 * Values:
 * - 0 - Interrupt requests from Timer n are disabled.
 * - 1 - Interrupt will be requested whenever TIF is set.
 */
//@{
#define BP_PIT_TCTRLn_TIE    (1U)          //!< Bit position for PIT_TCTRLn_TIE.
#define BM_PIT_TCTRLn_TIE    (0x00000002U) //!< Bit mask for PIT_TCTRLn_TIE.
#define BS_PIT_TCTRLn_TIE    (1U)          //!< Bit field size in bits for PIT_TCTRLn_TIE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_TCTRLn_TIE field.
#define BR_PIT_TCTRLn_TIE(n) (BME_UBFX32(HW_PIT_TCTRLn_ADDR(n), BP_PIT_TCTRLn_TIE, BS_PIT_TCTRLn_TIE))
#endif

//! @brief Format value for bitfield PIT_TCTRLn_TIE.
#define BF_PIT_TCTRLn_TIE(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_PIT_TCTRLn_TIE), uint32_t) & BM_PIT_TCTRLn_TIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIE field to a new value.
#define BW_PIT_TCTRLn_TIE(n, v) (BME_BFI32(HW_PIT_TCTRLn_ADDR(n), ((uint32_t)(v) << BP_PIT_TCTRLn_TIE), BP_PIT_TCTRLn_TIE, 1))
#endif
//@}

/*!
 * @name Register PIT_TCTRLn, field CHN[2] (RW)
 *
 * When activated, Timer n-1 needs to expire before timer n can decrement by 1.
 * Timer 0 can not be changed.
 *
 * Values:
 * - 0 - Timer is not chained.
 * - 1 - Timer is chained to previous timer. For example, for Channel 2, if this
 *     field is set, Timer 2 is chained to Timer 1.
 */
//@{
#define BP_PIT_TCTRLn_CHN    (2U)          //!< Bit position for PIT_TCTRLn_CHN.
#define BM_PIT_TCTRLn_CHN    (0x00000004U) //!< Bit mask for PIT_TCTRLn_CHN.
#define BS_PIT_TCTRLn_CHN    (1U)          //!< Bit field size in bits for PIT_TCTRLn_CHN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_TCTRLn_CHN field.
#define BR_PIT_TCTRLn_CHN(n) (BME_UBFX32(HW_PIT_TCTRLn_ADDR(n), BP_PIT_TCTRLn_CHN, BS_PIT_TCTRLn_CHN))
#endif

//! @brief Format value for bitfield PIT_TCTRLn_CHN.
#define BF_PIT_TCTRLn_CHN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_PIT_TCTRLn_CHN), uint32_t) & BM_PIT_TCTRLn_CHN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CHN field to a new value.
#define BW_PIT_TCTRLn_CHN(n, v) (BME_BFI32(HW_PIT_TCTRLn_ADDR(n), ((uint32_t)(v) << BP_PIT_TCTRLn_CHN), BP_PIT_TCTRLn_CHN, 1))
#endif
//@}
//-------------------------------------------------------------------------------------------
// HW_PIT_TFLGn - Timer Flag Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_PIT_TFLGn - Timer Flag Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * These registers hold the PIT interrupt flags.
 */
typedef union _hw_pit_tflgn
{
    uint32_t U;
    struct _hw_pit_tflgn_bitfields
    {
        uint32_t TIF : 1;              //!< [0] Timer Interrupt Flag
        uint32_t RESERVED0 : 31;       //!< [31:1]
    } B;
} hw_pit_tflgn_t;
#endif

/*!
 * @name Constants and macros for entire PIT_TFLGn register
 */
//@{
#define HW_PIT_TFLGn_COUNT (2U)

#define HW_PIT_TFLGn_ADDR(n)     (REGS_PIT_BASE + 0x10CU + (0x10U * n))

#ifndef __LANGUAGE_ASM__
#define HW_PIT_TFLGn(n)          (*(__IO hw_pit_tflgn_t *) HW_PIT_TFLGn_ADDR(n))
#define HW_PIT_TFLGn_RD(n)       (HW_PIT_TFLGn(n).U)
#define HW_PIT_TFLGn_WR(n, v)    (HW_PIT_TFLGn(n).U = (v))
#define HW_PIT_TFLGn_SET(n, v)   (BME_OR32(HW_PIT_TFLGn_ADDR(n), (uint32_t)(v)))
#define HW_PIT_TFLGn_CLR(n, v)   (BME_AND32(HW_PIT_TFLGn_ADDR(n), (uint32_t)(~(v))))
#define HW_PIT_TFLGn_TOG(n, v)   (BME_XOR32(HW_PIT_TFLGn_ADDR(n), (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual PIT_TFLGn bitfields
 */

/*!
 * @name Register PIT_TFLGn, field TIF[0] (W1C)
 *
 * Sets to 1 at the end of the timer period. Writing 1 to this flag clears it.
 * Writing 0 has no effect. If enabled, or, when TCTRLn[TIE] = 1, TIF causes an
 * interrupt request.
 *
 * Values:
 * - 0 - Timeout has not yet occurred.
 * - 1 - Timeout has occurred.
 */
//@{
#define BP_PIT_TFLGn_TIF     (0U)          //!< Bit position for PIT_TFLGn_TIF.
#define BM_PIT_TFLGn_TIF     (0x00000001U) //!< Bit mask for PIT_TFLGn_TIF.
#define BS_PIT_TFLGn_TIF     (1U)          //!< Bit field size in bits for PIT_TFLGn_TIF.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the PIT_TFLGn_TIF field.
#define BR_PIT_TFLGn_TIF(n)  (BME_UBFX32(HW_PIT_TFLGn_ADDR(n), BP_PIT_TFLGn_TIF, BS_PIT_TFLGn_TIF))
#endif

//! @brief Format value for bitfield PIT_TFLGn_TIF.
#define BF_PIT_TFLGn_TIF(v)  (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_PIT_TFLGn_TIF), uint32_t) & BM_PIT_TFLGn_TIF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIF field to a new value.
#define BW_PIT_TFLGn_TIF(n, v) (BME_BFI32(HW_PIT_TFLGn_ADDR(n), ((uint32_t)(v) << BP_PIT_TFLGn_TIF), BP_PIT_TFLGn_TIF, 1))
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_pit_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All PIT module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_pit
{
    __IO hw_pit_mcr_t MCR;                 //!< [0x0] PIT Module Control Register
    uint8_t _reserved0[220];
    __I hw_pit_ltmr64h_t LTMR64H;          //!< [0xE0] PIT Upper Lifetime Timer Register
    __I hw_pit_ltmr64l_t LTMR64L;          //!< [0xE4] PIT Lower Lifetime Timer Register
    uint8_t _reserved1[24];
    struct {
        __IO hw_pit_ldvaln_t LDVALn;       //!< [0x100] Timer Load Value Register
        __I hw_pit_cvaln_t CVALn;          //!< [0x104] Current Timer Value Register
        __IO hw_pit_tctrln_t TCTRLn;       //!< [0x108] Timer Control Register
        __IO hw_pit_tflgn_t TFLGn;         //!< [0x10C] Timer Flag Register
    } CHANNEL[2];
} hw_pit_t;
#pragma pack()

//! @brief Macro to access all PIT registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_PIT</code>.
#define HW_PIT         (*(hw_pit_t *) REGS_PIT_BASE)
#endif

#endif // __HW_PIT_REGISTERS_H__
// v22/130726/0.9
// EOF
