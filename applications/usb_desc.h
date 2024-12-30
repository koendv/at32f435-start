#ifndef USB_DESC_H
#define USB_DESC_H

#include <rtthread.h>
#include <stdbool.h>

/*!< usb packet size */
#ifdef CONFIG_USB_HS
#define CDC_MAX_MPS 512
#else
#define CDC_MAX_MPS 64
#endif

/*!< usb bus number */
#define BUSID0 0

/*!< endpoint address */
#define DAP_IN_EP   0x81
#define DAP_OUT_EP  0x01
#define CDC0_IN_EP  0x82
#define CDC0_OUT_EP 0x02
#define CDC0_INT_EP 0x83
#define CDC1_IN_EP  0x84
#define CDC1_OUT_EP 0x04
#define CDC1_INT_EP 0x85
#define MSC_IN_EP   0x86
#define MSC_OUT_EP  0x06

/*!< interface number */
#define DAP_INTF  0x00
#define CDC0_INTF 0x01
#define CDC1_INTF 0x03

void cdc_acm_init(uint8_t busid, uintptr_t reg_base);

void dap_configured(uint8_t busid);
void dap_out_callback(uint8_t busid, uint8_t ep, uint32_t nbytes);
void dap_in_callback(uint8_t busid, uint8_t ep, uint32_t nbytes);

void cdc_configured(uint8_t busid);
void cdc_reset(uint8_t busid);
void usbd_cdc_acm_set_dtr(uint8_t busid, uint8_t intf, bool dtr);
void usbd_cdc0_acm_bulk_out(uint8_t busid, uint8_t ep, uint32_t nbytes);
void usbd_cdc0_acm_bulk_in(uint8_t busid, uint8_t ep, uint32_t nbytes);
void usbd_cdc1_acm_bulk_out(uint8_t busid, uint8_t ep, uint32_t nbytes);
void usbd_cdc1_acm_bulk_in(uint8_t busid, uint8_t ep, uint32_t nbytes);

#endif
